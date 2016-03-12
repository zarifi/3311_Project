note
	description: "Summary description for {EMPTY_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EMPTY_TYPE
inherit
	PERSON_TYPE
create
	make

feature {NONE}
	make
		do
			int_type := -1
		end

feature -- attributes
	int_type: INTEGER

end
