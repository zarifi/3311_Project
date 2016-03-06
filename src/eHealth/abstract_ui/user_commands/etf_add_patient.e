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
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
