#include "Board.h"

Board::Board(BoardRenderer* t_boardRenderer)
		: m_boardRenderer(t_boardRenderer)
{
}

void Board::render()
{
	m_boardRenderer->renderBoard(m_board);
}
