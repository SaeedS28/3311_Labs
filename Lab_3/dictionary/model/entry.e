note
	description: "Entry in a dictionary consisting of a search key and a value."
	author: "Jackie and Your"
	date: "$Date$"
	revision: "$Revision$"

class
	ENTRY[V, K]

inherit
	ANY

redefine
	is_equal
	end

create
	make

feature -- Attributes
	value: V
	key: K

feature -- Constructor
	make (v: V; k: K)
		do
			value := v
			key := k
		end

feature
	is_equal (other: like Current): BOOLEAN
			-- Is `other' attached to an object considered
			-- equal to current object?
	do
		Result:=(current.key~other.key) and (current.value~other.value)
	end
end
