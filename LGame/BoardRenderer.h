#pragma once
#include <array>

// Simple Interface for the render the board 
class BoardRenderer
{
public:
	virtual void renderBoard(int boardArray[4][4]) = 0;
};

