note
	description: "Summary description for {PRESCRIPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRESCRIPTION
inherit
	COMPARABLE
redefine
	out
end
create
	make

feature {NONE}

	make (a_id: INTEGER; a_physician: PERSON; a_patient: PERSON)
		do
			id := a_id
			physician := a_physician
			patient := a_patient
			create {SORTED_TWO_WAY_LIST[MEDICINE]}medicines.make
		end

feature -- attributes

	id: INTEGER

	physician: PERSON

	patient: PERSON

	medicines: LIST[MEDICINE]

feature
	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := id < other.id
		end

	add_medicine(medicine: MEDICINE)
		do
			medicines.extend (medicine)
		end

	out: STRING
		local
			med_count: INTEGER
		do
			create Result.make_empty
			Result.append(id.out)
			Result.append ("->[")
			Result.append (id.out)
			Result.append (",")
			Result.append (physician.id.out)
			Result.append (",")
			Result.append (patient.id.out)
			Result.append (",(")
			med_count := 0
			across medicines as meds
			loop
				if med_count > 0 then
					Result.append(",")
				end
				Result.append (meds.item.out)
				med_count := med_count + 1
			end
			Result.append (")]")
		end

end
