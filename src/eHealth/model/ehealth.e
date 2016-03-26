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
			create {SORTED_TWO_WAY_LIST[PERSON]}physicians.make
			create {SORTED_TWO_WAY_LIST[PERSON]}patients.make
			create {SORTED_TWO_WAY_LIST[MEDICATION]}medications.make
			create {SORTED_TWO_WAY_LIST[PRESCRIPTION]}prescriptions.make
			create interactions.make(10)
			create status_message.make_ok
			create string_output.make_empty
		end

feature -- model attributes
	s : STRING
	i : INTEGER
	physicians: LIST[PERSON]
	patients: LIST[PERSON]
	medications: LIST[MEDICATION]
	prescriptions: LIST[PRESCRIPTION]
	interactions: HASH_TABLE[INTEGER, INTEGER]
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
	set_status_message(new_message: STATUS_MESSAGE)
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

	add_patient(id: INTEGER_64 ; name: STRING)
		require
			id_unique: across patients as p all p.item.id /= id end
			valid_name: status_message.is_valid_name (name)
		do
			patients.extend (create {PATIENT}.make_patient(id.as_integer_32, name))
		ensure
			patient_inserted: across patients as p some p.item.id = id and p.item.name = name end
			only_1_inserted: patients.count = old patients.count + 1
		end

	add_physician(id: INTEGER_64 ; name: STRING ; kind: INTEGER_64)
		require
			id_unique: across physicians as p all p.item.id /= id end
			valid_name: status_message.is_valid_name (name)
			valid_kind: kind = 3 or kind = 4
		local
			l_person_type: PERSON_TYPE
		do
			create {PHYSICIAN_TYPE}l_person_type.make_from_int(kind.as_integer_32)
			physicians.extend (create {PHYSICIAN}.make_physician(id.as_integer_32, name, l_person_type))
		end

	add_medication(id: INTEGER_64 ; medicine: TUPLE[name: STRING; kind: INTEGER_64; low: VALUE; hi: VALUE])
		require
			medication_name_not_taken: across medications as meds all meds.item.name /~ medicine.name end
			valid_kind: medicine.kind = 1 or medicine.kind = 2
			valid_range: True
		local
			l_type: MEDICATION_TYPE
		do
			create l_type.make_from_int (medicine.kind.as_integer_32)
			medications.extend (create {MEDICATION}.make (id.as_integer_32, medicine.name, l_type, medicine.low, medicine.hi))
		end

	add_interaction(id1: INTEGER_64 ; id2: INTEGER_64)
		require
			interaction_is_unique: across interactions.current_keys as key all
									not((key.item = id1.as_integer_32 and interactions[key.item] = id2.as_integer_32) or
									(key.item = id2.as_integer_32 and interactions[key.item] = id1.as_integer_32)) end
		do
			interactions.force (id1.as_integer_32, id2.as_integer_32)
		end

	new_prescription(id: INTEGER_64 ; doctor: INTEGER_64 ; patient: INTEGER_64)
		do
			prescriptions.extend(create {PRESCRIPTION}.make (id.as_integer_32, get_physician_by_id (doctor.as_integer_32), get_patient_by_id (patient.as_integer_32)))
		end

	add_medicine(id: INTEGER_64 ; medicine: INTEGER_64 ; dose: VALUE)
		do
			across prescriptions as presc
			loop
				if presc.item.id = id then
					across medications as meds
					loop
						if meds.item.id = medicine then
							presc.item.add_medicine (create {MEDICINE}.make (meds.item, dose))
						end
					end
				end
			end
		end

	prescriptions_q(medication_id: INTEGER_64)
		local
			medication: MEDICATION
			sorted_patients: LIST[PERSON]
		do
			string_output := ""
			create {SORTED_TWO_WAY_LIST[PERSON]}sorted_patients.make
			medication := get_medication_by_id (medication_id.as_integer_32)
			string_output.append ("  Output: medication is ")
			string_output.append (medication.name)
			across prescriptions as pres
			loop
				across pres.item.medicines as med
				loop
					if med.item.medication.id = medication_id then
						sorted_patients.extend (pres.item.patient)
					end
				end
			end
			if sorted_patients.count > 0 then
				across sorted_patients as patient
				loop
					string_output.append("%N")
					string_output.append ("    ")
					string_output.append(patient.item.id.out)
					string_output.append("->")
					string_output.append(patient.item.name)
				end
			end
		end

	dpr_q
		local
			found: 	BOOLEAN
			found_any: BOOLEAN
			l_i: INTEGER
			j: INTEGER
		do
			string_output := ""
			found_any := False
			across prescriptions as pres
			loop
				from
					l_i := 1
					found := false
				until
					l_i > pres.item.medicines.count - 1
				loop
					from
						j := l_i + 1
					until
						j > pres.item.medicines.count
					loop
						if ((interactions.has (pres.item.medicines[l_i].medication.id) and
						interactions[pres.item.medicines[l_i].medication.id] = pres.item.medicines[j].medication.id)) or
						((interactions.has (pres.item.medicines[j].medication.id) and
						interactions[pres.item.medicines[j].medication.id] = pres.item.medicines[l_i].medication.id)) then
							if not found_any then
								string_output.append ("  There are dangerous prescriptions:")
								found_any := True
							end
							if not found then
								string_output.append("%N")
								string_output.append ("    (")
								string_output.append (pres.item.patient.name)
								string_output.append (",")
								string_output.append (pres.item.patient.id.out)
								string_output.append (")->{ ")
								found := True
							else
								string_output.append (", ")
							end
							if interactions.has (pres.item.medicines[l_i].medication.id) then
								string_output.append (printable_interaction (pres.item.medicines[l_i].medication.id))
							else
								string_output.append (printable_interaction (pres.item.medicines[j].medication.id))
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
			if not is_output_set then
				string_output.append ("  There are no dangerous prescriptions")
			end
		end

		remove_medicine(id: INTEGER_64 ; medicine: INTEGER_64)
			do
				across prescriptions as pres
				loop
					if pres.item.id = id then
						across pres.item.medicines as med
						loop
							if med.item.medication.id = medicine then
								pres.item.medicines.remove
							end
						end
					end
				end
			end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append (i.out)
			Result.append (": ")
			Result.append (status_message.out)
			Result.append ("%N")
			if is_output_set then
				Result.append(string_output)
				clear_output_string
			else
				Result.append ("  Physicians:%N")
				across physicians as p
				loop
					Result.append ("    ")
					Result.append(p.item.out)
					Result.append ("%N")
				end
				Result.append ("  Patients: %N")
				across patients as p
				loop
					Result.append ("    ")
					Result.append(p.item.out)
					Result.append ("%N")
				end
				Result.append ("  Medications: %N")
				across medications as m
				loop
					Result.append ("    ")
					Result.append (m.item.out)
					Result.append ("%N")
				end
				Result.append ("  Interactions: %N")
				Result.append (print_interactions)
				Result.append ("  Prescriptions:")
				across prescriptions as pr
				loop
					Result.append ("%N")
					Result.append ("    ")
					Result.append(pr.item.out)
				end
			end
		end

	get_physician_by_id(a_id: INTEGER): PERSON
		require
			physician_exists: True
		local
			found_flag: BOOLEAN
		do
			create {PHYSICIAN}Result.make_empty
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
		end

		get_patient_by_id(a_id: INTEGER): PERSON
		require
			patient_exists: True
		local
			found_flag: BOOLEAN
		do
			create {PATIENT}Result.make_empty
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
		end

		printable_interaction(key: INTEGER): STRING
			local
				med1: MEDICATION
				med2: MEDICATION
			do
				create Result.make_empty
				if interactions.has (key) then
					med1 := get_medication_by_id (interactions[key])
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
			across interactions.current_keys as key
			loop
				Result.append ("    ")
				Result.append (printable_interaction(key.item))
				Result.append ("%N")
			end
		end

		get_medication_by_id(id: INTEGER): MEDICATION
		do
			create Result.make_empty
			across medications as meds
			loop
				if meds.item.id = id then
					Result := meds.item
				end
			end
		end

invariant
	no_physician_empty: across physicians as p all not p.item.is_empty end
	no_patient_empty: across patients as p all not p.item.is_empty end
end




