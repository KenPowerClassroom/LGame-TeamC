#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer,  int t_turnOrder) :
	m_stringRenderer(t_stringRenderer),
	m_inputRenderer(t_inputRenderer),
	m_turnOrder(t_turnOrder)
{
	m_Piece = Piece::L_A;
	m_Input = Input::ROW;
}

void StandardPlayer::playTurn(Board* board)
{
	indicationForLPiece();
	lPieceMovement(board);
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
	m_stringRenderer->printString("PLAYER " + std::to_string(m_turnOrder) + ", YOU CAN MOVE YOUR L PIECE NOW");
}

void StandardPlayer::lPieceMovement(Board* board)
{
	Piece piece;
	if (m_turnOrder == 1)
	{
		piece = Piece::L_A;
	}
	else
	{
		piece = Piece::L_B;
	}

	//contructing the LPieceMeovement
	LPieceMovement movement;
	for (unsigned int cellTurn = 0; cellTurn < 4; cellTurn++)
	{
		m_stringRenderer->printString("L piece Movement : " + std::to_string(cellTurn + 1));
		movement.addCellMovement(getCellMovementInput(piece));
	}

	//Making the movement 
	board->makeMove(movement);
}

CellMovement StandardPlayer::getCellMovementInput(Piece piece)
{
	m_Input = Input::ROW;
	CellMovement cellMovement;
	cellMovement.piece = piece;

	indicationForSelectingLPiece();

	while (true)
	{
		char firstInput = m_inputRenderer->getInput();
		if (m_Input == Input::ROW)
		{
			if (firstInput == '1')
			{
				cellMovement.newRow = 0;
				m_Input = Input::COL;
			}
			else if (firstInput == '2')
			{
				cellMovement.newRow = 1;
				m_Input = Input::COL;
			}
			else if (firstInput == '3')
			{
				cellMovement.newRow = 2;
				m_Input = Input::COL;
			}
			else if (firstInput == '4')
			{
				cellMovement.newRow = 3;
				m_Input = Input::COL;
			}
			else
			{
				m_stringRenderer->printString("YOU HAVE NOT ENTERED A VALID NUMBER. PLEASE TRY AGAIN.");
			}
		}

		if (m_Input == Input::COL)
		{
			m_stringRenderer->printString("WHERE DO YOU WANT TO MOVE YOUR L PIECE. PLEASE INDICATE A COLUMN.");
			char secondImput = m_inputRenderer->getInput();
			if (secondImput == 'A')
			{
				cellMovement.newColomn = 0;
				break;
			}
			else if (secondImput == 'B')
			{
				cellMovement.newColomn = 1;
				break;
			}
			else if (secondImput == 'C')
			{
				cellMovement.newColomn = 2;
				break;
			}
			else if (secondImput == 'D')
			{
				cellMovement.newColomn = 3;
				break;
			}
			else
			{
				m_stringRenderer->printString("YOU HAVE NOT ENTERED A VALID LETTER. PLEASE TRY AGAIN.");
			}
		}
		
	}
	return cellMovement;
}

void StandardPlayer::endTurn()
{
	system("PAUSE");
	system("CLS");
}
