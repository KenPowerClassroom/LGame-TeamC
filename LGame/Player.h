#pragma once
#include "Board.h"

class Player
{
public:
	virtual void playTurn(Board* board) = 0;
protected:
	virtual void endTurn() = 0;
};
