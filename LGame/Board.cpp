#include "Board.h"

Board::Board(BoardRenderer* renderer) : 
	m_renderer(renderer)
{

}

void Board::render()
{
	m_renderer->renderBoard(m_data);
}
