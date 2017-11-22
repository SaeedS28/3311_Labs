note
	description: "A Dictionary ADT mapping from keys to values"
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	DICTIONARY[V, K]

inherit
	ITERABLE[TUPLE[V,K]]

create
	make

feature {INSTRUCTOR_DICTIONARY_TESTS} -- Do not modify this export status!
	-- You are required to implement all dictionary features using these two attributes.
	values: ARRAY[V]
	keys: LINKED_LIST[K]

feature --Iterable method
	new_cursor: ITERATION_CURSOR[TUPLE[V,K]]
	local
		tup: TUPLE_ITERATION_CURSOR [V,K]
	do
		create tup.make (values,keys)
		Result:=tup
	end

feature -- Alternative Iteration Cursor
	another_cursor: ITERATION_CURSOR[ENTRY[V,K]]
	local
		ent: ENTRY_ITERATION_CURSOR [V,K]
	do
		create ent.make (values,keys)
		Result := ent
	end

feature -- Constructor
	make
			-- Initialize an empty dictionary.
		do
			create values.make_empty
			values.compare_objects
			create keys.make
			keys.compare_objects
		ensure
			empty_dictionary:
				(values.count=0) and (keys.count = 0)
			object_equality_for_keys:
				keys.object_comparison
			object_equality_for_values:
				values.object_comparison
		end

feature -- Commands

	add_entry (v: V; k: K)
			-- Add a new entry with key 'k' and value 'v'.
			-- It is required that 'k' is not an existing search key in the dictionary.
		require
			non_existing_key:
				not exists(k)
		do
			values.force(v, values.count+1)
			keys.extend(k)
		ensure
			entry_added:
				values[values.count]~v and keys[keys.count]~k
		end

	remove_entry (k: K)
			-- Remove the corresponding entry whose search key is 'k'.
			-- It is required that 'k' is an existing search key in the dictionary.
		require
			existing_key: exists(k)
		local
			key_position: INTEGER
			i: INTEGER
		do
			--remove key
			key_position:=keys.index_of(k,1)
			keys.go_i_th(key_position)
			keys.remove

			--remove value
			from
				i:= key_position
			until
				i> values.count-1
			loop
				values[i]:=values[i+1]
				i:= i+1
			end
			values.remove_tail (1)
		ensure
			dictionary_count_decremented:
				values.count= (old values.twin.count)-1
			key_removed: not exists(k)
		end

feature -- Queries

	count: INTEGER
			-- Number of entries in the dictionary.
		do
			Result:=values.count
		ensure
			correct_result:
				Result=values.count
		end

	exists (k: K): BOOLEAN
			-- Does key 'k' exist in the dictionary?
		local
			ret: BOOLEAN
		do
			across
				1 |..| keys.count as l
			loop
				Result:= keys[l.item]~k
				if Result then
					ret:=result
				end
			end
			result:=ret
		ensure
			correct_result:
				across
					1 |..| keys.count as l
				some
					keys[l.item]~k
				end
		end


	get_keys (v: V): ITERABLE[K]
			-- Return an iterable collection of keys that are associated with value 'v'.
			-- Hint: Refere to the architecture BON diagram of the Iterator Pattern, to see
			-- what classes can be used to instantiate objects that are iterable.
		local
			keys_list: LINKED_LIST[K]
			i:INTEGER
		do
			create keys_list.make

			from
				i:=values.lower
			until
				i>values.upper
			loop
				if values[i]~v then
					keys_list.extend (keys[i])
				end
				i:=i+1
			end
			Result:= keys_list
		ensure
			correct_result:
			across
				result as c
			all
				values.at (keys.index_of(c.item,1))~v
			end
		end

	get_value (k: K): detachable V
			-- Return the assocated value of search key 'k' if it exists.
			-- Void if 'k' does not exist.
			-- Declaring "detachable" besides the return type here indicates that
			-- the return value might be void (i.e., null).
		local
			i:INTEGER
		do
			from
				i:=1
			until
				i>keys.count
			loop
				if keys.at(i)~k then
					Result:=values.at (i)
				end
				i:=i+1
			end
		ensure
			case_of_void_result:
				keys.has(k)=false implies result~void
			case_of_non_void_result: True
				keys.has(k)=true implies result/~void
		end

invariant
	consistent_counts_of_keys_and_values:
		keys.count = values.count
	consistent_counts_of_imp_and_adt:
		keys.count = count
end
