note
	description: "Summary description for {PERSON_TYPE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PERSON_TYPE

feature

	int_type: INTEGER
	deferred
	end

feature
	make_empty: PERSON_TYPE
		do
			Result := {}
		end

end
