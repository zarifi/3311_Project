note
	description: "Summary description for {STATUS_MESAGE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STATUS_MESSAGE
inherit
	ANY
	redefine
		out
	end

create
	make_ok,
	make_phy_valid_id,
	make_phy_positive_id,
	make_phy_valid_name_start,
	make_patient_valid_id,
	make_patient_positive_id,
	make_patient_valid_name_start,
	make_medication_valid_id,
	make_medication_positive_id,
	make_medication_valid_name_start,
	make_medication_name_exists,
	make_valid_dose,
	make_positive_medication_ids,
	make_unique_medication_ids,
	make_registered_medications,
	make_unique_interaction,
	make_remove_conflict,
	make_prescription_valid_id,
	make_prescription_positive_id,
	make_registered_physician,
	make_registered_patient,
	make_pair_exists,
	make_rescription_id_exists,
	make_registered_medicine_id,
	make_prescribed_medicine,
	make_specialist_required,
	make_allowed_range,
	make_medicine_not_in_prescription
feature {NONE} -- Initialization

	make_ok
	do
		err_code := err_ok
	end

	make_phy_positive_id
	do
		err_code := err_phy_positive_id
	end

	make_phy_valid_id
	do
		err_code := err_phy_valid_id
	end

	make_phy_valid_name_start
	do
		err_code := err_phy_valid_name_start
	end

	make_patient_positive_id
	do
		err_code := err_patient_positive_id
	end

	make_patient_valid_id
	do
		err_code := err_patient_valid_id
	end

	make_patient_valid_name_start
	do
		err_code := err_patient_valid_name_start
	end

	make_medication_positive_id
	do
		err_code := err_medication_positive_id
	end

	make_medication_valid_id
	do
		err_code := err_medication_valid_id
	end

	make_medication_valid_name_start
	do
		err_code := err_medication_valid_name_start
	end

	make_medication_name_exists
	do
		err_code := err_medication_name_exists
	end

	make_valid_dose
	do
		err_code := err_valid_dose
	end

	make_positive_medication_ids
	do
		err_code := err_positive_medication_ids
	end

	make_unique_medication_ids
	do
		err_code := err_unique_medication_ids
	end

	make_registered_medications
	do
		err_code := err_registered_medications
	end

	make_unique_interaction
	do
		err_code := err_unique_interaction
	end

	make_remove_conflict
	do
		err_code := err_remove_conflict
	end

	make_prescription_positive_id
	do
		err_code := err_prescription_positive_id
	end

	make_prescription_valid_id
	do
		err_code := err_prescription_valid_id
	end

	make_registered_physician
	do
		err_code := err_registered_physician
	end

	make_registered_patient
	do
		err_code := err_registered_patient
	end

	make_pair_exists
	do
		err_code := err_pair_exists
	end

	make_rescription_id_exists
	do
		err_code := err_rescription_id_exists
	end

	make_registered_medicine_id
	do
		err_code := err_registered_medicine_id
	end

	make_prescribed_medicine
	do
		err_code := err_prescribed_medicine
	end

	make_specialist_required
	do
		err_code := err_specialist_required
	end

	make_allowed_range
	do
		err_code := err_allowed_range
	end

	make_medicine_not_in_prescription
	do
		err_code := err_medicine_not_in_prescription
	end
feature -- Output

	out: STRING
			-- string representation of current status message
		do
			Result := err_message [err_code]
		end

feature {NONE} -- Implementation

	err_code: INTEGER

	err_message: ARRAY[STRING]
		once
			create Result.make_filled ("", 1, 28)
			Result.put("ok",1)
			Result.put ("physician id must be a positive integer",2)
			Result.put ("physician id already in use",3)
			Result.put("name must start with a letter" ,4)
			Result.put ("patient id must be a positive integer",5)
			Result.put ("patient id already in use",6)
			Result.put("name must start with a letter",7)
			Result.put ("medication id must be a positive integer",8)
			Result.put ("medication id already in use",9)
			Result.put("medication name must start with a letter",10)
			Result.put("medication name already in use",11)
			Result.put("require 0 < low-dose <= hi-dose",12)
			Result.put("medication ids must be positive integers",13)
			Result.put("medication ids must be different",14)
			Result.put("medications with these ids must be registered",15)
			Result.put("interaction already exists",16)
			Result.put("first remove conflicting medicine prescribed by generalist",17)
			Result.put("prescription id must be a positive integer",18)
			Result.put("prescription id already in use",19)
			Result.put("physician with this id not registered",20)
			Result.put("patient with this id not registered",21)
			Result.put("prescription already exists for this physician and patient",22)
			Result.put("prescription with this id does not exist",23)
			Result.put("medication id must be registered",24)
			Result.put("medication is already prescribed",25)
			Result.put("specialist is required to add a dangerous interaction",26)
			Result.put("dose is outside allowed range",27)
			Result.put("medication is not in the prescription",28)
		end

	err_ok: INTEGER = 1
	err_phy_positive_id: INTEGER = 2
	err_phy_valid_id: INTEGER = 3
	err_phy_valid_name_start: INTEGER =4
	err_patient_positive_id: INTEGER = 5
	err_patient_valid_id: INTEGER = 6
	err_patient_valid_name_start: INTEGER =7
	err_medication_positive_id: INTEGER = 8
	err_medication_valid_id: INTEGER = 9
	err_medication_valid_name_start: INTEGER =10
	err_medication_name_exists: INTEGER =11
	err_valid_dose: INTEGER = 12
	err_positive_medication_ids: INTEGER = 13
	err_unique_medication_ids: INTEGER = 14
	err_registered_medications: INTEGER = 15
	err_unique_interaction: INTEGER = 16
	err_remove_conflict: INTEGER = 17
	err_prescription_positive_id: INTEGER = 18
	err_prescription_valid_id: INTEGER = 19
	err_registered_physician:INTEGER = 20
	err_registered_patient:INTEGER = 21
	err_pair_exists:INTEGER = 22
	err_rescription_id_exists: INTEGER = 23
	err_registered_medicine_id:INTEGER =24
	err_prescribed_medicine:INTEGER = 25
	err_specialist_required: INTEGER = 26
	err_allowed_range: INTEGER = 27
	err_medicine_not_in_prescription: INTEGER = 28

	valid_message(a_message_no:INTEGER): BOOLEAN
		do
			Result := err_message.lower <= a_message_no
				and a_message_no <= err_message.upper
		ensure
			Result =( err_message.lower <= a_message_no
				and a_message_no <= err_message.upper)
		end
feature -- valid names
	is_valid_name(a_name:STRING): BOOLEAN
		local

		do
			Result := a_name.count >= 1
			Result := Result
				and then is_ascii_character(a_name[1])
		ensure
			Result implies a_name.count >= 1
			Result implies is_ascii_character(a_name[1])
		end

	is_ascii_character(c: CHARACTER): BOOLEAN
		do
			Result := (65 <= c.code and c.code <= 90)
				or (97 <= c.code and c.code <= 172)
		ensure
			Result = (65 <= c.code and c.code <= 90)
				or (97 <= c.code and c.code <= 172)
		end
end
