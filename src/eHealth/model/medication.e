note
	description: "Summary description for {MEDICATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MEDICATION
inherit
	COMPARABLE
	redefine
		out
	end

create
	make

feature {NONE}

	make (a_id: INTEGER; a_name: STRING; a_type: MEDICATION_TYPE; a_low: VALUE; a_high: VALUE)
		do
			id := a_id
			name := a_name
			type := a_type
			low := a_low
			high := a_high
		end

feature -- attributes

	id: INTEGER

	name: STRING

	type: MEDICATION_TYPE

	low: VALUE

	high: VALUE

feature
	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := id < other.id
		end

	out: STRING
		do
			create Result.make_empty
			Result.append (id.out)
			Result.append ("->[")
			Result.append (name)
			Result.append (",")
			Result.append (type.out)
			Result.append (",")
			Result.append (low.out)
			Result.append (",")
			Result.append (high.out)
			Result.append ("]")
		end

end
