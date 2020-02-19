#pragma once
#include "BoardRenderer.h"
#include "PieceMovement.h"

class Board
{
public:
	Board(BoardRenderer* renderer);
	
	void makeMove(PieceMovement const& movement);

	void render();


private:
	int m_data[4][4] = { {3,1,1,0}, {0,2,1,0}, {0,2,1,0}, {0,2,2,4}};
	BoardRenderer* m_renderer;
};

