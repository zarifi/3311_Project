note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REMOVE_MEDICINE
inherit
	ETF_REMOVE_MEDICINE_INTERFACE
		redefine remove_medicine end
create
	make
feature -- command
	remove_medicine(id: INTEGER_64 ; medicine: INTEGER_64)
		require else
			remove_medicine_precond(id, medicine)
		local
			sm: STATUS_MESSAGE
    	do
    		create  sm.make_ok
			-- perform some update on the model state
			model.default_update
			if id <= 0 then
				create sm.make_prescription_positive_id
				model.set_status_message (sm)
			elseif across model.prescriptions as pres all pres.item.id /= id end then
				create sm.make_rescription_id_exists
				model.set_status_message (sm)
			elseif medicine <= 0 then
				create sm.make_medication_positive_id
				model.set_status_message (sm)
			elseif across model.medications as meds all meds.item.id /= medicine end then
				create sm.make_registered_medicine_id
				model.set_status_message (sm)
			elseif across model.get_prescription_by_id(id.as_integer_32).medicines as meds all meds.item.medication.id /= medicine end then
				create sm.make_medicine_not_in_prescription
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.remove_medicine (id, medicine)
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
