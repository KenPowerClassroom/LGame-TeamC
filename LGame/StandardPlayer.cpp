#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer,  int t_turnOrder) :
	m_stringRenderer(t_stringRenderer),
	m_inputRenderer(t_inputRenderer),
	m_turnOrder(2)
{
	m_Piece = Piece::L_A;
	m_Input = Input::ROW;
}

void StandardPlayer::startTurn()
{
	indicationForLPiece();
	indicationForSelectingLPiece();
	inputForLPiece();
	indicationForNetrualPiece();
	endTurn();
}

void StandardPlayer::indicationForNetrualPiece()
{
	std::string playerInput;
	m_stringRenderer->printString("YOU CAN MOVE YOUR NETRUAL PIECE NOW");
	m_stringRenderer->printString("WHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)");
}

void StandardPlayer::indicationForSelectingLPiece()
{
	m_stringRenderer->printString("WHERE DO YOU WANT TO MOVE YOUR L PIECE. PLEASE INDICATE A ROW.");
}

void StandardPlayer::indicationForLPiece()
{
	if (m_turnOrder == 1)
	{
		m_turnOrder = 2;
	}
	else if (m_turnOrder == 2)
	{
		m_turnOrder = 1;
	}
	m_stringRenderer->printString("PLAYER " + std::to_string(m_turnOrder) + ", YOU CAN MOVE YOUR L PIECE NOW");
}

void StandardPlayer::inputForLPiece()
{
	CellMovement m_lPieceMovement;
	while (true)
	{
		char firstInput = m_inputRenderer->getInput();
		if (m_Input == Input::ROW)
		{
			if (firstInput == 'A')
			{
				m_lPieceMovement.newRow = 'A';
				m_Input = Input::COL;
			}
			else if (firstInput == 'B')
			{
				m_lPieceMovement.newRow = 'B';
				m_Input = Input::COL;
			}
			else if (firstInput == 'C')
			{
				m_lPieceMovement.newRow = 'C';
				m_Input = Input::COL;
			}
			else if (firstInput == 'D')
			{
				m_lPieceMovement.newRow = 'D';
				m_Input = Input::COL;
			}
			else
			{
				m_stringRenderer->printString("YOU HAVE NOT ENTERED A VALID LETTER. PLEASE TRY AGAIN.");
			}
		}

		if (m_Input == Input::COL)
		{
			m_stringRenderer->printString("WHERE DO YOU WANT TO MOVE YOUR L PIECE. PLEASE INDICATE A COLUMN.");
			char secondImput = m_inputRenderer->getInput();
			if (secondImput == '1')
			{
				m_lPieceMovement.newCol = '1';
				break;
			}
			else if (secondImput == '2')
			{
				m_lPieceMovement.newCol = 'B';
				break;
			}
			else if (secondImput == '3')
			{
				m_lPieceMovement.newCol = 'C';
				break;
			}
			else if (secondImput == '4')
			{
				m_lPieceMovement.newCol = 'D';
				break;
			}
			else
			{
				m_stringRenderer->printString("YOU HAVE NOT ENTERED A VALID NUMBER. PLEASE TRY AGAIN.");
			}
		}
		
	}
}

void StandardPlayer::endTurn()
{
	system("PAUSE");
	system("CLS");
}
