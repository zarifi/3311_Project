note
	description: "Summary description for {MEDICATION_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MEDICATION_TYPE

create
	make_pill, make_liquid, make_from_int

feature {NONE}

	make_pill
		do
			type := 1
		end

	make_liquid
		do
			type := 2
		end

	make_from_int (int: INTEGER)
		require
			valid_integer_value: int = 1 or int = 2
		do
			if int = 1 then
				make_pill
			elseif int = 2 then
				make_liquid
			end
		end

feature -- attributes

	type: INTEGER

end
