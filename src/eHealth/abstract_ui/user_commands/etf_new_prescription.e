note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW_PRESCRIPTION
inherit
	ETF_NEW_PRESCRIPTION_INTERFACE
		redefine new_prescription end
create
	make
feature -- command
	new_prescription(id: INTEGER_64 ; doctor: INTEGER_64 ; patient: INTEGER_64)
		require else
			new_prescription_precond(id, doctor, patient)
		local
			sm: STATUS_MESSAGE
    	do
    		create sm.make_ok
			-- perform some update on the model state
			model.default_update
			if id <= 0 then
				create sm.make_prescription_positive_id
				model.set_status_message (sm)
			elseif across model.prescriptions as pres some pres.item.id = id.as_integer_32 end then
				create sm.make_prescription_valid_id
				model.set_status_message (sm)
			elseif doctor <= 0 then
				create sm.make_phy_positive_id
				model.set_status_message (sm)
			elseif across model.physicians as phy all phy.item.id /= doctor.as_integer_32 end then
				create sm.make_registered_physician
				model.set_status_message (sm)
			elseif patient <= 0 then
				create sm.make_patient_positive_id
				model.set_status_message (sm)
			elseif across model.patients as pat all pat.item.id /= patient.as_integer_32 end then
				create sm.make_registered_patient
				model.set_status_message (sm)
			elseif across model.prescriptions as pres some pres.item.physician.id = doctor.as_integer_32 and pres.item.patient.id = patient.as_integer_32 end then
				create sm.make_pair_exists
				model.set_status_message (sm)
			else
				model.set_status_message (sm)
				model.new_prescription (id, doctor, patient)
			end

			etf_cmd_container.on_change.notify ([Current])
    	end

end
