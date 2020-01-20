#pragma once
#include <array>

// Simple Interface for the render the board 
class BoardRenderer
{
public:
	virtual void renderBoard(std::array<std::array<int, 4>, 4> boardArray) = 0;
};

