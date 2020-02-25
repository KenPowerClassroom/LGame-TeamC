#include "Board.h"

Board::Board(BoardRenderer* t_boardRenderer)
		: m_boardRenderer(t_boardRenderer)
{
	pieceReference[Piece::L_A] = 1;
	pieceReference[Piece::L_B] = 2;
	pieceReference[Piece::NEUTRAL_A] = 3;
	pieceReference[Piece::NEUTRAL_B] = 4;
}

Board::Board(BoardRenderer* renderer, int data[4][4]) :
	m_boardRenderer(renderer)
{
	//array copy 
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			m_board[i][j] = data[i][j];
		}
	}

	pieceReference[Piece::L_A] = 1;
	pieceReference[Piece::L_B] = 2;
	pieceReference[Piece::NEUTRAL_A] = 3;
	pieceReference[Piece::NEUTRAL_B] = 4;
}

void Board::makeMove(PieceMovement const& movement)
{
	std::vector<CellMovement> cellMovements = movement.getCellMovement();
	if (cellMovements.size() > 0)
	{
		//deleting previous spot
		int pieceIndex = pieceReference[cellMovements.at(0).piece];
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (m_board[i][j] == pieceIndex)
				{
					m_board[i][j] = 0;
				}
			}
		}

		//making the movements
		for (CellMovement const& cell : cellMovements)
		{
			m_board[cell.newCol][cell.newRow] = pieceReference[cell.piece];
		}
	}
}

void Board::render()
{
	m_boardRenderer->renderBoard(m_board);
}

bool Board::operator==(Board const& rhs)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (m_board[i][j] != rhs.m_board[i][j])
			{
				return false;
			}
		}
	}

	return true;
}
