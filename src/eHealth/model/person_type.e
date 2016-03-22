note
	description: "Summary description for {PERSON_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PERSON_TYPE
inherit
	ANY
undefine
	out
end

feature

	int_type: INTEGER
	deferred
	end

	out: STRING
		deferred
		end

end
