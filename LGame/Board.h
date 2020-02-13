#pragma once

#include "BoardRenderer.h"

class Board
{
public:
	Board(BoardRenderer* t_boardRenderer);
	void render();
private:

	BoardRenderer* m_boardRenderer;
	int m_board[4][4]
		= { {3,1,1,0},
			{0,2,1,0},
			{0,2,1,0},
			{0,2,2,4}
	};
};
