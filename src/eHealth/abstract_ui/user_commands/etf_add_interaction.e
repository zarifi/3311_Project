note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_INTERACTION
inherit
	ETF_ADD_INTERACTION_INTERFACE
		redefine add_interaction end
create
	make
feature -- command
	add_interaction(id1: INTEGER_64 ; id2: INTEGER_64)
		require else
			add_interaction_precond(id1, id2)
    	local
			sm : STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			if across model.interactions.current_keys as key some
									(key.item = id1.as_integer_32 and model.interactions[key.item] = id2.as_integer_32) or
									(key.item = id2.as_integer_32 and model.interactions[key.item] = id1.as_integer_32) end then
				create sm.make_interaction_exists
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.add_interaction (id1, id2)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
