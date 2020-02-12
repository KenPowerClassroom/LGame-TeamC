#pragma once

#include "BoardRenderer.h"

struct BoardMovement
{
	int oldX;
	int oldY;

	int newX;
	int newY;

	int pieceIndex;
};

class Board
{
public:
	Board(BoardRenderer& t_boardRenderer);
private:
	BoardRenderer& m_boardRenderer;
};
