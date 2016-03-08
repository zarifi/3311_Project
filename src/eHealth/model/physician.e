note
	description: "Summary description for {PHYSICIAN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHYSICIAN

	inherit
		PERSON


create
	make

feature -- constructor
		make(a_id: INTEGER; a_name: STRING; a_type:INTEGER)
		do
			id := a_id
			name := a_name
			type := a_type
		end

feature-- attribute
type: INTEGER


end
