note
	description: "Summary description for {STATUS_MESSAGE}."
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
	make_ok, make_name_start, make_patient_id_taken, make_physician_id_taken, make_medication_name_taken, make_interaction_exists

feature {NONE} -- Initialization

	make_ok
		do
			err_code := err_ok
		end

	make_name_start
		do
			err_code := err_name_start
		end

	make_patient_id_taken
		do
			err_code := err_patient_id_taken
		end

	make_physician_id_taken
		do
			err_code := err_physician_id_taken
		end

	make_medication_name_taken
		do
			err_code := err_medication_name_taken
		end

	make_interaction_exists
		do
			err_code := err_interaction_exists
		end

feature -- Output

	out: STRING
			-- string representation of current status message
		do
			Result := err_message [err_code]
		End

feature {NONE} -- Implementation

	err_code: INTEGER

	err_message: ARRAY [STRING]
		once
			create Result.make_filled ("", 1, 10)
			Result.put ("ok", 1)
			Result.put ("name must start with a letter", 2)
			Result.put ("patient id already in use", 3)
			Result.put ("physician id already in use", 4)
			Result.put ("medication name already in use", 5)
			Result.put ("interaction already exists", 6)
			Result.put ("finish this game first", 8)
			Result.put ("game is finished", 9)
			Result.put ("game ended in a tie", 10)
		end

	err_ok: INTEGER = 1

	err_name_start: INTEGER = 2

	err_patient_id_taken: INTEGER = 3

	err_physician_id_taken: INTEGER = 4

	err_medication_name_taken: INTEGER = 5

	err_interaction_exists: INTEGER = 6

	valid_message (a_message_no: INTEGER): BOOLEAN
		do
			Result := err_message.lower <= a_message_no and a_message_no <= err_message.upper
		ensure
			Result = (err_message.lower <= a_message_no and a_message_no <= err_message.upper)
		end

feature -- valid names

	is_valid_name (a_name: STRING): BOOLEAN
		local
		do
			Result := a_name.count >= 1
			Result := Result and then is_ascii_character (a_name [1])
		ensure
			Result implies a_name.count >= 1
			Result implies is_ascii_character (a_name [1])
		end

	is_ascii_character (c: CHARACTER): BOOLEAN
		do
			Result := (65 <= c.code and c.code <= 90) or (97 <= c.code and c.code <= 172)
		ensure
			Result = (65 <= c.code and c.code <= 90) or (97 <= c.code and c.code <= 172)
		end

end
