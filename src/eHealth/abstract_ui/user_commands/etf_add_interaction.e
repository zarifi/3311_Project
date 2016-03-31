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
			if id1 <0 or id2 < 0 then
				create sm.make_positive_medication_ids
				model.set_status_message (sm)
			elseif id1 = id2 then
				create sm.make_unique_medication_ids
				model.set_status_message (sm)
			elseif across model.medications as meds all meds.item.id /= id1 end or across model.medications as meds all meds.item.id /= id2 end then
				create sm.make_registered_medications
				model.set_status_message (sm)
			elseif across model.interactions as key some ((key.item.id1 = id1 and key.item.id2 = id2) or (key.item.id1 = id2 and key.item.id2 = id1)) end then
				create sm.make_unique_interaction
				model.set_status_message (sm)
			elseif not model.check_valid_interaction (id1.as_integer_32, id2.as_integer_32) then
				create sm.make_remove_conflict
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.add_interaction (id1, id2)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
