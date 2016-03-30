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
		local
			sm: STATUS_MESSAGE
    	do
    		create sm.make_ok
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
			elseif across model.get_prescription_by_id(id.as_integer_32).medicines as meds some meds.item.medication.id = medicine end then
				create sm.make_registered_medicine_id
				model.set_status_message (sm)
			elseif not model.check_if_interaction_by_specialist(id.as_integer_32, medicine.as_integer_32) then
				create sm.make_specialist_required
				model.set_status_message (sm)
			elseif model.get_medication_by_id(medicine.as_integer_32).high < dose or model.get_medication_by_id(medicine.as_integer_32).low > dose then
				create sm.make_allowed_range
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.add_medicine (id, medicine, dose)
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
