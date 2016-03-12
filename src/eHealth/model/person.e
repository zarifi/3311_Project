note
	description: "Summary description for {PERSON}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PERSON

feature

	make_physician (a_id: INTEGER; a_name: STRING; a_type: PERSON_TYPE): PERSON
		do
			Result := create {PHYSICIAN}.make (a_id, a_name, a_type)
		end

	make_patient (a_id: INTEGER; a_name: STRING): PERSON
		do
			Result := create {PATIENT}.make (a_id, a_name)
		end

feature --attributes

	name: STRING

	id: INTEGER

	type: PERSON_TYPE
		deferred
		end

end
