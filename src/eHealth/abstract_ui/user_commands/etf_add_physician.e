note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_PHYSICIAN
inherit
	ETF_ADD_PHYSICIAN_INTERFACE
		redefine add_physician end
create
	make
feature -- command
	add_physician(id: INTEGER_64 ; name: STRING ; kind: INTEGER_64)
		require else
			add_physician_precond(id, name, kind)
		local
			sm : STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			if across model.physicians as p some p.item.id = id.as_integer_32 end then
				create sm.make_physician_id_taken
				model.set_status_message (sm)
			elseif not sm.is_valid_name (name) then
				create sm.make_name_start
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.add_physician (id, name, kind)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
