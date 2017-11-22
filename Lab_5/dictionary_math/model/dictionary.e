note
	description: "A Dictionary ADT mapping from keys to values"
	author: "Jackie and You"
	date: "$Date$"
	revision: "$Revision$"

class
	-- Constrained genericity because V and K will be used
	-- in the math model class FUN, which require both to be always
	-- attached for void safety.
	DICTIONARY[V -> attached ANY, K -> attached ANY]
inherit
	ITERABLE[TUPLE[V, K]]
create
	make

feature {NONE} -- Do not modify this export status!
	values: ARRAY[V]
	keys: LINKED_LIST[K]

feature -- Abstraction function
	model: FUN[K, V] -- Do not modify the type of this query.
			-- Abstract the dictionary ADT as a mathematical function.
		local
			pair: PAIR[K,V]
			int: INTEGER
		do
			create result.make_empty

			from
				int:=1
			until
				int>count
			loop
				create pair.make (keys[int], values[int])
				result.extend(pair)
				int:=int+1
			end

		ensure
			consistent_model_imp_counts:
				model.count~count
			consistent_model_imp_contents:
				across
					1 |..| result.count as j
				all
					result.has(create {PAIR[K,V]}.make (keys[j.item], values[j.item]))
				end
		end

feature -- feature required by ITERABLE
	new_cursor: ITERATION_CURSOR[TUPLE[V, K]]
	local
		tup: TUPLE_ITERATION_CURSOR [V,K]
	do
		create tup.make (values,keys)
		Result:=tup
	end

feature -- Constructor
	make
			-- Initialize an empty dictionary.
		do
			create values.make_empty
			values.compare_objects
			create keys.make
			keys.compare_objects
			-- Your Task: add more code here
		ensure
			empty_model:
				model.is_empty
			object_equality_for_keys:
				keys.object_comparison
			object_equality_for_values:
				values.object_comparison
		end

feature -- Commands

	add_entry (v: V; k: K)
		require
			non_existing_in_model:
				not model.domain.has (k)
		do
			values.force(v, values.count+1)
			keys.extend(k)
		ensure
			entry_added_to_model:
				model ~ old model.extended ([k, v])
		end

	remove_entry (k: K)
		require
			existing_in_model: True
				-- Your Task
		local
			key_position: INTEGER
			i: INTEGER
		do
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
			entry_removed_from_model:
				model ~ (old model.deep_twin).domain_subtracted_by (k)
		end

feature -- Queries

	count: INTEGER
			-- Number of keys in BST.
		do
			Result:=values.count
		ensure
			correct_model_result:
				model.count~count
		end

	get_keys (v: V): ITERABLE[K]
			-- Keys that are associated with value 'v'.
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
			correct_model_result:
				across
					result as j
				all
                	model.range_restricted_by(v).domain.has(j.item)
                end

		end

	get_value (k: K): detachable V
			-- Assocated value of 'k' if it exists.
			-- Void if 'k' does not exist.
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
				not model.domain.has (k) implies result ~ void
			case_of_non_void_result:
				model.domain.has (k) implies result /~ void
		end
invariant
	consistent_keys_values_counts:
		keys.count = values.count
	consistent_imp_adt_counts:
		keys.count = count
end
