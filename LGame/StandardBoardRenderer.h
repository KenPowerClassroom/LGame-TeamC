#pragma once
#include <iostream>
#include <string>
#include "BoardRenderer.h"
#include "StringRenderer.h"
#include <string>

class StandardBoardRenderer : public BoardRenderer
{
public:
	StandardBoardRenderer(StringRenderer* t_stringRenderer);
	virtual void renderBoard(int boardArray[4][4]) override;

private:
	StringRenderer* m_stringRenderer;
};

