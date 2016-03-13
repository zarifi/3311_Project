note
	description: "Summary description for {PATIENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PATIENT

inherit

	PERSON

create
	make_patient,
	make_empty

feature -- constructor

	make_patient (a_id: INTEGER; a_name: STRING)
		do
			id := a_id
			name := a_name
			create {EMPTY_TYPE}type.make
		end

	make_empty
		do
			id := -1
			create name.make_empty
			create {EMPTY_TYPE}type.make
		end

feature --attribute

	type: PERSON_TYPE

end
