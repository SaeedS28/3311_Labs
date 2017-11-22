note
	description: "Summary description for {TEST_SOLITAIRE_UI}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TEST_SOLITAIRE_UI
inherit
	ES_TEST
create
	make
feature
	make
		do
			add_boolean_case (agent test)
			add_boolean_case (agent test_redo)
			add_boolean_case (agent test_redo_empty)
			add_boolean_case (agent test_undo_empty)
			add_boolean_case (agent test_multiple_undo)
		end
feature
	test: BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
		do
			comment ("test_cross_game: undo")

			create ui.new_cross_game
			Result := ui.game.board ~ bta.templates.cross_board
			check Result end

			b1 := ui.game.board.deep_twin
			ui.move_left (3, 4)

			ui.undo
			Result :=
				ui.game.board ~ b1 and
				ui.message ~ ui.success
			check Result end
		end

	test_redo: BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
			b2: BOARD
		do
			comment ("test_cross_game: redo")

			create ui.new_skull_game
			Result := ui.game.board ~ bta.templates.skull_board
			check Result end

			b1 := ui.game.board.deep_twin
			ui.move_up (6, 3)
			b2:=ui.game.board.deep_twin

			ui.undo
			Result :=
				ui.game.board ~ b1 and
				ui.message ~ ui.success
			check Result end

			ui.redo
			Result :=
				ui.game.board ~ b2 and
				ui.message ~ ui.success
			check Result end
		end

	test_redo_empty:BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
		--	b2: BOARD
		do
			comment ("test_skull_game: redo_empty")

			create ui.new_skull_game
			Result := ui.game.board ~ bta.templates.skull_board
			check Result end

			b1 := ui.game.board.deep_twin
			ui.redo
			result:=ui.message~ui.error_nothing_to_redo
			check result end
		end

	test_undo_empty:BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
		--	b2: BOARD
		do
			comment ("test_skull_game: undo_empty")

			create ui.new_skull_game
			Result := ui.game.board ~ bta.templates.skull_board
			check Result end

			b1 := ui.game.board.deep_twin
			ui.undo
			result:=ui.message~ui.error_nothing_to_undo
			check result end
		end

	test_multiple_undo: BOOLEAN
		local
			ui: SOLITAIRE_USER_INTERFACE
			bta: BOARD_TEMPLATES_ACCESS
			b1: BOARD
			b2: BOARD
			b3: BOARD
		do
			comment ("test_skull_game: multiple_undo and redos")

			create ui.new_skull_game
			Result := ui.game.board ~ bta.templates.skull_board
			check Result end

			b1 := ui.game.board.deep_twin
			ui.move_up (6, 3)
			b2 := ui.game.board.deep_twin
			ui.move_up (6, 5)
			b3 := ui.game.board.deep_twin

			ui.undo
			Result :=
				ui.game.board ~ b2 and
				ui.message ~ ui.success
			check Result end

			ui.undo
			Result :=
				ui.game.board ~ b1 and
				ui.message ~ ui.success
			check Result end

			ui.redo
			Result :=
				ui.game.board ~ b2 and
				ui.message ~ ui.success
			check Result end

			ui.undo
			Result :=
				ui.game.board ~ b1 and
				ui.message ~ ui.success
			check Result end

			ui.undo
			Result :=
				ui.message ~ui.error_nothing_to_undo
			check Result end

			ui.redo
			Result :=
				ui.game.board ~ b2 and
				ui.message ~ ui.success
			check Result end

			ui.move_up (6, 5)
			b3 := ui.game.board.deep_twin

			ui.redo
			Result :=
				ui.message ~ ui.error_nothing_to_redo
			check Result end

		end
end
