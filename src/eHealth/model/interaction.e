note
	description: "Summary description for {INTERACTION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTERACTION

create
	make,
	make_empty
feature
	make(a_id1: INTEGER; a_id2: INTEGER)
		do
			id1 := a_id1
			id2 := a_id2
		end

	make_empty
		do
			id1 := -1
			id2 := -1
		end

feature -- attributes
	id1: INTEGER
	id2: INTEGER

end
