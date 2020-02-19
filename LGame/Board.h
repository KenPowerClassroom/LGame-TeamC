#pragma once
#include "BoardRenderer.h"
#include "PieceMovement.h"

class Board
{
public:
	Board(BoardRenderer* renderer);
	Board(BoardRenderer* renderer, int data[4][4]);
	
	void makeMove(PieceMovement const& movement);

	void render();

	bool operator==(Board const& rhs);


private:
	int m_data[4][4] = { {3,1,1,0}, {0,2,1,0}, {0,2,1,0}, {0,2,2,4}};
	BoardRenderer* m_renderer;
};

