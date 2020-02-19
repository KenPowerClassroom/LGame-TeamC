#include "Board.h"

Board::Board(BoardRenderer* renderer) : 
	m_renderer(renderer)
{

}

Board::Board(BoardRenderer* renderer, int data[4][4]) :
	m_renderer(renderer)
{
	//array copy 
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			m_data[i][j] = data[i][j];
		}
	}
}

void Board::makeMove(PieceMovement const& movement)
{

}

void Board::render()
{
	m_renderer->renderBoard(m_data);
}

bool Board::operator==(Board const& rhs)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (m_data[i][j] != rhs.m_data[i][j])
			{
				return false;
			}
		}
	}

	return true;
}
