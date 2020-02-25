#pragma once
#include "Board.h"

class Player
{
public:
	virtual void playTurn(Board* board) = 0;
protected:
	virtual void indicationForNetrualPiece() = 0;
	virtual void indicationForLPiece() = 0;
	virtual void endTurn() = 0;
};
