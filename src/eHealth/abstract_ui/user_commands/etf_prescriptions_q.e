note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PRESCRIPTIONS_Q
inherit
	ETF_PRESCRIPTIONS_Q_INTERFACE
		redefine prescriptions_q end
create
	make
feature -- command
	prescriptions_q(medication_id: INTEGER_64)
		require else
			prescriptions_q_precond(medication_id)
		local
			sm: STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			if medication_id <= 0 then
				create sm.make_medication_positive_id
				model.set_status_message (sm)
			elseif across model.medications as med all med.item.id /= medication_id end then
				create sm.make_registered_medicine_id
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.prescriptions_q (medication_id)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
