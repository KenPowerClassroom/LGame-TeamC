#pragma once

#include "BoardRenderer.h"
#include "PieceMovement.h"
#include <map>

class Board
{
public:
	Board(BoardRenderer* t_boardRenderer);
	Board(BoardRenderer* renderer, int data[4][4]);
	
	void makeMove(PieceMovement const& movement);

	void render();

	bool operator==(Board const& rhs);

private:

	BoardRenderer* m_boardRenderer;
	int m_board[4][4]
		= { {3,1,1,0},
			{0,2,1,0},
			{0,2,1,0},
			{0,2,2,4}
	};
	std::map<Piece, int> pieceReference;
};

