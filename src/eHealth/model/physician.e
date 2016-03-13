note
	description: "Summary description for {PHYSICIAN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHYSICIAN

inherit

	PERSON

create
	make_physician,
	make_empty

feature -- constructor

	make_physician (a_id: INTEGER; a_name: STRING; a_type: PERSON_TYPE)
		do
			id := a_id
			name := a_name
			type := a_type
		end

	make_empty
		do
			id := -1
			create name.make_empty
			create {EMPTY_TYPE}type.make
		end

feature -- attribute

	type: PERSON_TYPE

end
