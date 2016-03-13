note
	description: "Summary description for {PERSON}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PERSON
inherit
	COMPARABLE

feature

	make (a_id: INTEGER; a_name: STRING)
		do
			name := a_name
			id := a_id
		end

feature --attributes

	name: STRING

	id: INTEGER

	type: PERSON_TYPE
		deferred
		end

	make_empty
		deferred
		end

feature
	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := id < other.id
		end

end
