#pragma once
#include "BoardRenderer.h"

class StandardBoardRenderer : public BoardRenderer
{
	virtual void renderBoard(std::array<std::array<int, 4>, 4> boardArray) override;
};

