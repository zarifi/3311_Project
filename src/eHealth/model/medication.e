note
	description: "Summary description for {MEDICATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MEDICATION
create
	make

feature {NONE}
	make(a_id: INTEGER; a_name: STRING; a_type: MEDICATION_TYPE; a_low: INTEGER; a_high: INTEGER)
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
	low: INTEGER
	high: INTEGER

end
