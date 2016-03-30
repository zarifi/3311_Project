note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DPR_Q
inherit
	ETF_DPR_Q_INTERFACE
		redefine dpr_q end
create
	make
feature -- command
	dpr_q
		local
			sm: STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			model.set_status_message (sm)
			model.dpr_q
			etf_cmd_container.on_change.notify ([Current])
    	end

end
