note
	description: "Summary description for {MEDICINE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MEDICINE
inherit
	COMPARABLE

create
	make

feature {NONE}

	make (a_medication: MEDICATION; a_dose: VALUE)
		do
			medication := a_medication
			dose := a_dose
		end

feature -- attributes

	medication: MEDICATION

	dose: VALUE

feature
	is_less alias "<" (other: like Current): BOOLEAN
		do
			Result := medication.id < other.medication.id
		end

end
