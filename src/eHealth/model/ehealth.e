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
		end

feature -- model attributes
	s : STRING
	i : INTEGER
	physicians: LIST[PERSON]
	patients: LIST[PERSON]
	medications: LIST[MEDICATION]
	prescriptions: LIST[PRESCRIPTION]
	interactions: HASH_TABLE[INTEGER, INTEGER]

feature -- model operations
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
		do
			patients.extend (create {PATIENT}.make_patient(id.as_integer_32, name))
		end

	add_physician(id: INTEGER_64 ; name: STRING ; kind: INTEGER_64)
		require
			valid_kind: kind = 3 or kind = 4
		local
			l_person_type: PERSON_TYPE
		do
			create {PHYSICIAN_TYPE}l_person_type.make_from_int(kind.as_integer_32)
			physicians.extend (create {PHYSICIAN}.make_physician(id.as_integer_32, name, l_person_type))
		end

	add_medication(id: INTEGER_64 ; medicine: TUPLE[name: STRING; kind: INTEGER_64; low: VALUE; hi: VALUE])
		require
			valid_kind: medicine.kind = 1 or medicine.kind = 2
		local
			l_type: MEDICATION_TYPE
		do
			create l_type.make_from_int (medicine.kind.as_integer_32)
			medications.extend (create {MEDICATION}.make (id.as_integer_32, medicine.name, l_type, medicine.low, medicine.hi))
		end

	add_interaction(id1: INTEGER_64 ; id2: INTEGER_64)
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

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
--			Result.append ("System State: default model state ")
--			Result.append ("(")
--			Result.append (i.out)
--			Result.append (")")
			Result.append ("physicians%N")
			across physicians as p
			loop
				Result.append(p.item.out)
				Result.append ("%N")
			end
			Result.append ("patients%N")
			across patients as p
			loop
				Result.append(p.item.out)
				Result.append ("%N")
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
			end
		end

invariant
	no_physician_empty: across physicians as p all not p.item.is_empty end
	no_patient_empty: across patients as p all not p.item.is_empty end
end




