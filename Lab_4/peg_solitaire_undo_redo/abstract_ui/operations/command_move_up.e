note
	description: "Summary description for {COMMAND_MOVE_LEFT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMAND_MOVE_UP

inherit
	COMMAND

create
	make

feature -- operations of the command
	execute
		do
			current.game.move_up(row,column)
		end

	undo
		do
			game.board.set_status (row    , column, game.board.occupied_slot)
			game.board.set_status (row - 1, column, game.board.occupied_slot)
			game.board.set_status (row - 2, column, game.board.unoccupied_slot)
		end

	redo
		do
			execute
		end
end
