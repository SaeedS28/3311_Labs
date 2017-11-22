note
	description: "Summary description for {ENTRY_ITERATION_CURSOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ENTRY_ITERATION_CURSOR[V,K]

inherit
	ITERATION_CURSOR [ENTRY[V,K]]

create
	make

feature
	-- Initialize the cursor from LL and array
	make(va: ARRAY[V]; ll: LINKED_LIST[K])
	do
		values:=va
		keys:=ll
		position:=keys.lower
	end

feature --Features
	item: ENTRY[V,K]
	local
		val: V
		key : K
	do
		val:=values[position]
		key:=keys[position]
		create result.make(val,key)
	end

	after: BOOLEAN
	do
		Result:=(position>keys.count) and (position>values.count)
	end

	forth
	do
		position:=position+1
	end

feature {NONE}
	values: ARRAY[V]
	keys: LINKED_LIST[K]
	position: INTEGER

invariant
		consitent_data_structures:
			values.lower = keys.lower
		and values.count=keys.count
end

