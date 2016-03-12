note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	EHEALTH

inherit
	ANY
		redefine
			out
		end

create {ETF_MODEL_ACCESS}
	make

feature {NONE} -- Initialization
	make
			-- Initialization for `Current'.
		do
			create s.make_empty
			i := 0
			create {SORTED_TWO_WAY_LIST[PERSON]}physicians.make
			create {SORTED_TWO_WAY_LIST[PERSON]}patients.make
		end

feature -- model attributes
	s : STRING
	i : INTEGER
	physicians: LIST[PERSON]
	patients: LIST[PERSON]

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

feature -- queries
	out : STRING
		do
			create Result.make_from_string ("  ")
			Result.append ("System State: default model state ")
			Result.append ("(")
			Result.append (i.out)
			Result.append (")")
		end

end




