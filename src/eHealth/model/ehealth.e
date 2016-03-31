note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	EHEALTH

inherit

	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			i := 0
			create {SORTED_TWO_WAY_LIST [PERSON]} physicians.make
			create {SORTED_TWO_WAY_LIST [PERSON]} patients.make
			create {SORTED_TWO_WAY_LIST [MEDICATION]} medications.make
			create {SORTED_TWO_WAY_LIST [PRESCRIPTION]} prescriptions.make
			create interactions.make (10)
			create status_message.make_ok
			create string_output.make_empty
		end

feature -- model attributes

	s: STRING

	i: INTEGER

	physicians: LIST [PERSON]

	patients: LIST [PERSON]

	medications: LIST [MEDICATION]

	prescriptions: LIST [PRESCRIPTION]

	interactions: HASH_TABLE [INTEGER, INTEGER]

	status_message: STATUS_MESSAGE

	string_output: STRING

feature -- Different string output

	is_output_set: BOOLEAN
		do
			Result := not string_output.is_empty
		end

	clear_output_string
		do
			create string_output.make_empty
		end

feature -- model operations

	set_status_message (new_message: STATUS_MESSAGE)
		do
			status_message := new_message
		end

	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

	add_patient (id: INTEGER_64; name: STRING)
		require
			positive_id: id > 0
			id_unique: across patients as p all p.item.id /= id end
			valid_name: status_message.is_valid_name (name)
		do
			patients.extend (create {PATIENT}.make_patient (id.as_integer_32, name))
		ensure
			patient_inserted: across patients as p some p.item.id = id and p.item.name ~ name end
			only_1_inserted: patients.count = old patients.count + 1
		end

	add_physician (id: INTEGER_64; name: STRING; kind: INTEGER_64)
		require
			positive_id: id > 0
			id_unique: across physicians as p all p.item.id /= id end
			valid_name: status_message.is_valid_name (name)
		local
			l_person_type: PERSON_TYPE
		do
			create {PHYSICIAN_TYPE} l_person_type.make_from_int (kind.as_integer_32)
			physicians.extend (create {PHYSICIAN}.make_physician (id.as_integer_32, name, l_person_type))
		ensure
			physician_inserted: across physicians as phy some phy.item.id = id and phy.item.name ~ name and phy.item.type.int_type = (create {PHYSICIAN_TYPE}.make_from_int (kind.as_integer_32)).int_type end
			only_1_inserted: physicians.count = old physicians.count + 1
		end

	add_medication (id: INTEGER_64; medicine: TUPLE [name: STRING; kind: INTEGER_64; low: VALUE; hi: VALUE])
		require
			positive_id: id > 0
			id_unique: across medications as meds all meds.item.id /= id end
			valid_medication_name: status_message.is_valid_name (medicine.name)
			medication_name_not_taken: across medications as meds all meds.item.name /~ medicine.name end
			valid_range: medicine.low > create {VALUE}.make_from_int (0) and medicine.hi >= medicine.low
		local
			l_type: MEDICATION_TYPE
		do
			create l_type.make_from_int (medicine.kind.as_integer_32)
			medications.extend (create {MEDICATION}.make (id.as_integer_32, medicine.name, l_type, medicine.low, medicine.hi))
		ensure
			medication_inserted: across medications as meds some meds.item.id = id and meds.item.name ~ medicine.name and meds.item.high = medicine.hi and meds.item.low = medicine.low and meds.item.type.type = medicine.kind end
			only_1_inserted: medications.count = old medications.count + 1
		end

	add_interaction (id1: INTEGER_64; id2: INTEGER_64)
		require
			positive_ids: id1 > 0 and id2 > 0
			different_ids: id1 /= id2
			medication_ids_registered: across medications as meds some meds.item.id = id1 end and across medications as meds some meds.item.id = id2 end
			interaction_is_unique: across interactions.current_keys as key all not ((key.item = id1.as_integer_32 and interactions [key.item] = id2.as_integer_32) or (key.item = id2.as_integer_32 and interactions [key.item] = id1.as_integer_32)) end
			valid_interaction: check_valid_interaction (id1.as_integer_32, id2.as_integer_32)
		do
			interactions.force (id1.as_integer_32, id2.as_integer_32)
		ensure
			interaction_inserted: (interactions.has (id1.as_integer_32) and interactions [id1.as_integer_32] = id2) or (interactions.has (id2.as_integer_32) and interactions [id2.as_integer_32] = id1)
			only_1_way_added: interactions.has (id1.as_integer_32) and interactions [id1.as_integer_32] = id2 implies not (interactions.has (id2.as_integer_32) and interactions [id2.as_integer_32] = id1)
		end

	new_prescription (id: INTEGER_64; doctor: INTEGER_64; patient: INTEGER_64)
		require
			positive_id: id > 0
			id_unique: across prescriptions as pres all pres.item.id /= id.as_integer_32 end
			physician_id_positive: doctor > 0
			physician_registered: across physicians as phy some phy.item.id = doctor.as_integer_32 end
			patient_id_positive: patient > 0
			patient_registered: across patients as pat some pat.item.id = patient.as_integer_32 end
			prescription_not_assigned: across prescriptions as pres all pres.item.physician.id /= doctor.as_integer_32 or pres.item.patient.id /= patient.as_integer_32 end
		do
			prescriptions.extend (create {PRESCRIPTION}.make (id.as_integer_32, get_physician_by_id (doctor.as_integer_32), get_patient_by_id (patient.as_integer_32)))
		ensure
			prescription_added: across prescriptions as presc some presc.item.id = id and presc.item.physician.id = doctor and presc.item.patient.id = patient end
			only_1_added: prescriptions.count = old prescriptions.count + 1
		end

	add_medicine (id: INTEGER_64; medicine: INTEGER_64; dose: VALUE)
		require
			positive_id: id > 0
			prescription_exists: across prescriptions as pres some pres.item.id = id end
			positive_medication_id: medicine > 0
			medication_registered: across medications as meds some meds.item.id = medicine end
			medication_not_prescribed: across get_prescription_by_id (id.as_integer_32).medicines as meds all meds.item.medication.id /= medicine end
			specialist_adds_dangerous: check_if_interaction_by_specialist (id.as_integer_32, medicine.as_integer_32)
			dose_in_range: get_medication_by_id (medicine.as_integer_32).high >= dose and get_medication_by_id (medicine.as_integer_32).low <= dose
		do
			across
				prescriptions as presc
			loop
				if presc.item.id = id then
					across
						medications as meds
					loop
						if meds.item.id = medicine then
							presc.item.add_medicine (create {MEDICINE}.make (meds.item, dose))
						end
					end
				end
			end
		ensure
			medicine_added: across get_prescription_by_id (id.as_integer_32).medicines as meds some meds.item.medication.id = medicine and meds.item.dose ~ dose end
			only_1_added: get_prescription_by_id (id.as_integer_32).medicines.count = old (get_prescription_by_id (id.as_integer_32).medicines.count) + 1
		end

	prescriptions_q (medication_id: INTEGER_64)
		require
			positive_id: medication_id > 0
			medication_registered: across medications as med some med.item.id = medication_id end
		local
			medication: MEDICATION
			sorted_patients: LIST [PERSON]
		do
			string_output := ""
			create {SORTED_TWO_WAY_LIST [PERSON]} sorted_patients.make
			medication := get_medication_by_id (medication_id.as_integer_32)
			string_output.append ("  Output: medication is ")
			string_output.append (medication.name)
			across
				prescriptions as pres
			loop
				across
					pres.item.medicines as med
				loop
					if med.item.medication.id = medication_id then
						sorted_patients.extend (pres.item.patient)
					end
				end
			end
			if sorted_patients.count > 0 then
				across
					sorted_patients as patient
				loop
					string_output.append ("%N")
					string_output.append ("    ")
					string_output.append (patient.item.id.out)
					string_output.append ("->")
					string_output.append (patient.item.name)
				end
			end
		end

	dpr_q
		local
			found: BOOLEAN
			found_any: BOOLEAN
			l_i: INTEGER
			j: INTEGER
			med_patients: HASH_TABLE [LIST [MEDICINE], INTEGER]
			l_med_list: LIST [MEDICINE]
			sorted_patients: LIST [PERSON]
		do
			string_output := ""
			found_any := False
			create med_patients.make (10)
			across
				prescriptions as pres
			loop
				if med_patients.has (pres.item.patient.id) then
					if attached med_patients [pres.item.patient.id] as list then
						list.append (pres.item.medicines.deep_twin)
					end
				else
					med_patients.put (pres.item.medicines.deep_twin, pres.item.patient.id)
				end
			end
			sorted_patients := patients.deep_twin
			sort_by_name (sorted_patients)
			across
				sorted_patients as pat
			loop
				create {ARRAYED_LIST [MEDICINE]} l_med_list.make (0)
				if med_patients.has (pat.item.id) then
					if attached med_patients [pat.item.id] as m1 then
						l_med_list := m1
					end
					from
						l_i := 1
						found := false
					until
						l_i > l_med_list.count - 1
					loop
						from
							j := l_i + 1
						until
							j > l_med_list.count
						loop
							if ((interactions.has (l_med_list [l_i].medication.id) and interactions [l_med_list [l_i].medication.id] = l_med_list [j].medication.id)) or ((interactions.has (l_med_list [j].medication.id) and interactions [l_med_list [j].medication.id] = l_med_list [l_i].medication.id)) then
								if not found_any then
									string_output.append ("  There are dangerous prescriptions:")
									found_any := True
								end
								if not found then
									string_output.append ("%N")
									string_output.append ("    (")
									string_output.append (pat.item.name)
									string_output.append (",")
									string_output.append (pat.item.id.out)
									string_output.append (")->{ ")
									found := True
								else
									string_output.append (", ")
								end
								if interactions.has (l_med_list [l_i].medication.id) then
									string_output.append (printable_interaction (l_med_list [l_i].medication.id))
								else
									string_output.append (printable_interaction (l_med_list [j].medication.id))
								end
							end
							j := j + 1
						end
						l_i := l_i + 1
					end
					if found then
						string_output.append (" }")
					end
				end
			end
			if not is_output_set then
				string_output.append ("  There are no dangerous prescriptions")
			end
		end

	remove_medicine (id: INTEGER_64; medicine: INTEGER_64)
		require
			positive_prescription_id: id > 0
			prescription_exists: across prescriptions as pres some pres.item.id = id end
			positive_medication_id: medicine > 0
			medication_registered: across medications as meds some meds.item.id = medicine end
			medication_in_prescription: across get_prescription_by_id (id.as_integer_32).medicines as meds some meds.item.medication.id = medicine end
		do
			across
				prescriptions as pres
			loop
				if pres.item.id = id then
					across
						pres.item.medicines as med
					loop
						if med.item.medication.id = medicine then
							pres.item.medicines.remove
						end
					end
				end
			end
		ensure
			medicine_removed: across get_prescription_by_id (id.as_integer_32).medicines as meds all meds.item.medication.id /= medicine end
			only_1_removed: get_prescription_by_id (id.as_integer_32).medicines.count = old (get_prescription_by_id (id.as_integer_32).medicines.count) - 1
		end

feature -- queries

	sort_by_name (list: LIST [PERSON])
		local
			temp: PERSON
			j: INTEGER
			k: INTEGER
		do
			from
				j := 1
			until
				j > list.count - 1
			loop
				from
					k := j + 1
				until
					k > list.count
				loop
					if (list [j].name > list [k].name or (list [j].name ~ list [k].name and list [j].id > list [k].id)) then
						temp := list [k]
						list [k] := list [j]
						list [j] := temp
					end
					k := k + 1
				end
				j := j + 1
			end
		end

	out: STRING
		do
			create Result.make_from_string ("  ")
			Result.append (i.out)
			Result.append (": ")
			Result.append (status_message.out)
			Result.append ("%N")
			if is_output_set then
				Result.append (string_output)
				clear_output_string
			else
				Result.append ("  Physicians:%N")
				across
					physicians as p
				loop
					Result.append ("    ")
					Result.append (p.item.out)
					Result.append ("%N")
				end
				Result.append ("  Patients: %N")
				across
					patients as p
				loop
					Result.append ("    ")
					Result.append (p.item.out)
					Result.append ("%N")
				end
				Result.append ("  Medications: %N")
				across
					medications as m
				loop
					Result.append ("    ")
					Result.append (m.item.out)
					Result.append ("%N")
				end
				Result.append ("  Interactions: %N")
				Result.append (print_interactions)
				Result.append ("  Prescriptions:")
				across
					prescriptions as pr
				loop
					Result.append ("%N")
					Result.append ("    ")
					Result.append (pr.item.out)
				end
			end
		end

	get_physician_by_id (a_id: INTEGER): PERSON
		require
			physician_exists: True
		local
			found_flag: BOOLEAN
		do
			create {PHYSICIAN} Result.make_empty
			from
				physicians.start
				found_flag := False
			until
				physicians.after or found_flag
			loop
				if physicians.item_for_iteration.id = a_id then
					Result := physicians.item_for_iteration
					found_flag := True
				end
				physicians.forth
			end
		ensure
			correct_result: Result.id = a_id
		end

	get_patient_by_id (a_id: INTEGER): PERSON
		require
			patient_exists: True
		local
			found_flag: BOOLEAN
		do
			create {PATIENT} Result.make_empty
			from
				patients.start
				found_flag := False
			until
				patients.after or found_flag
			loop
				if patients.item_for_iteration.id = a_id then
					Result := patients.item_for_iteration
					found_flag := True
				end
				patients.forth
			end
		ensure
			correct_result: Result.id = a_id
		end

	printable_interaction (key: INTEGER): STRING
		local
			med1: MEDICATION
			med2: MEDICATION
		do
			create Result.make_empty
			if interactions.has (key) then
				med1 := get_medication_by_id (interactions [key])
				med2 := get_medication_by_id (key)
				if med1.name < med2.name then
					Result.append ("[")
					Result.append (med1.name)
					Result.append (",")
					Result.append (med1.type.out)
					Result.append (",")
					Result.append (med1.id.out)
					Result.append ("]->[")
					Result.append (med2.name)
					Result.append (",")
					Result.append (med2.type.out)
					Result.append (",")
					Result.append (med2.id.out)
					Result.append ("]")
				else
					Result.append ("[")
					Result.append (med2.name)
					Result.append (",")
					Result.append (med2.type.out)
					Result.append (",")
					Result.append (med2.id.out)
					Result.append ("]->[")
					Result.append (med1.name)
					Result.append (",")
					Result.append (med1.type.out)
					Result.append (",")
					Result.append (med1.id.out)
					Result.append ("]")
				end
			end
		end

	print_interactions: STRING
		do
			create Result.make_empty
			across
				interactions.current_keys as key
			loop
				Result.append ("    ")
				Result.append (printable_interaction (key.item))
				Result.append ("%N")
			end
		end

	get_medication_by_id (id: INTEGER): MEDICATION
		do
			create Result.make_empty
			across
				medications as meds
			loop
				if meds.item.id = id then
					Result := meds.item
				end
			end
		ensure
			correct_result: Result.id = id
		end

	get_prescription_by_id (id: INTEGER): PRESCRIPTION
		do
			create Result.make_empty
			across
				prescriptions as pres
			loop
				if pres.item.id = id then
					Result := pres.item
				end
			end
		ensure
			correct_result: Result.id = id
		end

feature -- contracts

	check_if_interaction_by_specialist (prescription_id, medication_id: INTEGER): BOOLEAN
		local
			j: INTEGER
			pres_patients: HASH_TABLE [INTEGER, INTEGER]
			med_presc: HASH_TABLE [LIST [MEDICINE], INTEGER]
			l_med_list: LIST [MEDICINE]
			prescription: PRESCRIPTION
		do
			prescription := get_prescription_by_id (prescription_id)
			if prescription.physician.type.int_type = (create {PHYSICIAN_TYPE}.make_specialist).int_type then
				Result := True
			else
				create pres_patients.make (10)
				create med_presc.make (10)
				across
					prescriptions as pres
				loop
					if pres_patients.has (pres.item.patient.id) then
						if attached med_presc [pres_patients [pres.item.patient.id]] as list then
							list.append (pres.item.medicines)
						end
					else
						pres_patients.extend (pres.item.id, pres.item.patient.id)
						med_presc.put (pres.item.medicines.deep_twin, pres.item.id)
					end
				end
				Result := True
				across
					prescriptions as pres
				loop
					if pres.item.id = prescription_id then
						create {ARRAYED_LIST [MEDICINE]} l_med_list.make (0)
						if attached med_presc [pres_patients [pres.item.patient.id]] as m1 then
							l_med_list := m1
						end
						across
							l_med_list as med
						loop
							if (interactions.has (med.item.medication.id) and interactions [med.item.medication.id] = medication_id) or (interactions.has (medication_id) and interactions [medication_id] = med.item.medication.id) then
								Result := False
							end
						end
					end
				end
			end
		end

	check_valid_interaction (id1, id2: INTEGER): BOOLEAN
		local
			j: INTEGER
			k: INTEGER
			pres_patients: HASH_TABLE [INTEGER, INTEGER]
			med_presc: HASH_TABLE [LIST [MEDICINE], INTEGER]
		do
			create pres_patients.make (10)
			create med_presc.make (10)
			across
				prescriptions as pres
			loop
				if pres.item.physician.type.int_type = (create {PHYSICIAN_TYPE}.make_generalist).int_type then
					if pres_patients.has (pres.item.patient.id) then
						if attached med_presc [pres_patients [pres.item.patient.id]] as list then
							list.append (pres.item.medicines)
						end
					else
						pres_patients.extend (pres.item.id, pres.item.patient.id)
						med_presc.put (pres.item.medicines.deep_twin, pres.item.id)
					end
				end
			end
			Result := True
			across
				med_presc.current_keys as key
			loop
				if attached med_presc [key.item] as list then
					from
						j := 1
					until
						j > list.count - 1 or not Result
					loop
						from
							k := j + 1
						until
							k > list.count or not Result
						loop
							if (list [j].medication.id = id1 and list [k].medication.id = id2) or (list [k].medication.id = id1 and list [j].medication.id = id2) then
								Result := False
							end
						end
					end
				end
			end
		end

invariant
	no_physician_empty: across physicians as p all not p.item.is_empty end
	no_patient_empty: across patients as p all not p.item.is_empty end
	no_prescription_empty: across prescriptions as pres all not pres.item.is_empty end

end
