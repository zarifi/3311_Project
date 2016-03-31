note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_MEDICATION
inherit
	ETF_ADD_MEDICATION_INTERFACE
		redefine add_medication end
create
	make
feature -- command
	add_medication(id: INTEGER_64 ; medicine: TUPLE[name: STRING; kind: INTEGER_64; low: VALUE; hi: VALUE])
		require else
			add_medication_precond(id, medicine)
    	local
			sm : STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			if id <= 0 then
				create sm.make_medication_positive_id
				model.set_status_message (sm)
			elseif across model.medications as med some med.item.id = id end then
				create sm.make_medication_valid_id
				model.set_status_message (sm)
			elseif not sm.is_valid_name (medicine.name) then
				create sm.make_medication_valid_name_start
				model.set_status_message (sm)
			elseif across model.medications as med some med.item.name ~ medicine.name end then
				create sm.make_medication_name_exists
				model.set_status_message (sm)
			elseif medicine.low <= create {VALUE}.make_from_int (0) or medicine.hi < medicine.low then
				create sm.make_valid_dose
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.add_medication (id, medicine)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
