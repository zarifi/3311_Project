note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_PATIENT
inherit
	ETF_ADD_PATIENT_INTERFACE
		redefine add_patient end
create
	make
feature -- command
	add_patient(id: INTEGER_64 ; name: STRING)
		require else
			add_patient_precond(id, name)
		local
			sm : STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			if id <= 0 then
				create sm.make_patient_positive_id
				model.set_status_message (sm)
			elseif across model.patients as p some p.item.id = id.as_integer_32 end then
				create sm.make_patient_valid_id
				model.set_status_message (sm)
			elseif not sm.is_valid_name (name) then
				create sm.make_patient_valid_name_start
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.add_patient (id, name)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
