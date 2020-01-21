#pragma once
#include <iostream>
#include <string>
#include "BoardRenderer.h"

class StandardBoardRenderer : public BoardRenderer
{
public:
	StandardBoardRenderer(std::ostream& output);
	virtual void renderBoard(int boardArray[4][4]) override;

private:
	std::ostream& m_output;
};

