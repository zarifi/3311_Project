note
	description: "Summary description for {PHYSICIAN_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHYSICIAN_TYPE
inherit
	PERSON_TYPE

create
	make_generalist, make_specialist, make_from_int

feature {NONE}
	make_generalist
		do
			int_type := 3
		end

	make_specialist
		do
			int_type := 4
		end

	make_from_int (int: INTEGER)
		require
			valid_integer_value: int = 3 or int = 4
		do
			if int = 3 then
				make_generalist
			elseif int = 4 then
				make_specialist
			end
		end

feature -- attributes
	int_type: INTEGER

feature
	out: STRING
		do
			create Result.make_empty
			if int_type = 3 then
				Result.append("gn")
			else
				Result.append("sp")
			end
		end

end
