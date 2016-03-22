note
	description: "Summary description for {PERSON}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PERSON
inherit
	COMPARABLE
	redefine
		out
	end

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

	is_empty: BOOLEAN
		do
			if id = -1 and name.is_empty then
				Result := True
			else
				Result := False
			end
		end

feature
	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := id < other.id
		end

	out: STRING
		do
			create Result.make_empty
			Result.append (id.out)
			Result.append ("->")
			if not type.out.is_empty then
				Result.append ("[")
			end
			Result.append (name)
			if not type.out.is_empty then
				Result.append (",")
				Result.append (type.out)
				Result.append ("]")
			end
		end

invariant
	id_name_not_empty: id = -1 or name.is_empty implies is_empty

end
