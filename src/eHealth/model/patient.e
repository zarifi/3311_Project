note
	description: "Summary description for {PATIENT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PATIENT
	inherit
		PERSON

create
	make

feature -- constructor
	make(a_id:INTEGER; a_name:STRING)
	do
		id := a_id
		name := a_name
	end

feature --attribute
type: INTEGER
do
	
end

end
