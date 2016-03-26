note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_MEDICINE
inherit
	ETF_ADD_MEDICINE_INTERFACE
		redefine add_medicine end
create
	make
feature -- command
	add_medicine(id: INTEGER_64 ; medicine: INTEGER_64 ; dose: VALUE)
		require else
			add_medicine_precond(id, medicine, dose)
    	do
			-- perform some update on the model state
			model.default_update
			model.add_medicine (id, medicine, dose)
			etf_cmd_container.on_change.notify ([Current])
    	end

end
