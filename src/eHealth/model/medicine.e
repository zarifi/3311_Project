note
	description: "Summary description for {MEDICINE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MEDICINE
create
	make

feature {NONE}
	make(a_prescription: PRESCRIPTION; a_medication: MEDICATION; a_dose: VALUE)
		do
			prescription := a_prescription
			medication := a_medication
			dose := a_dose
		end

feature -- attributes
	medication: MEDICATION
	prescription: PRESCRIPTION
	dose: VALUE

end
