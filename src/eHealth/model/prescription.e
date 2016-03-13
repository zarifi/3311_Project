note
	description: "Summary description for {PRESCRIPTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PRESCRIPTION
inherit
	COMPARABLE
create
	make

feature {NONE}

	make (a_id: INTEGER; a_physician: PERSON; a_patient: PERSON)
		do
			id := a_id
			physician := a_physician
			patient := a_patient
		end

feature -- attributes

	id: INTEGER

	physician: PERSON

	patient: PERSON

feature
	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := id < other.id
		end

end
