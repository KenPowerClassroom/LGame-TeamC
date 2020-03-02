#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer,  int t_turnOrder) :
	m_stringRenderer(t_stringRenderer),
	m_inputRenderer(t_inputRenderer),
	m_turnOrder(t_turnOrder)
{
	m_Piece = Piece::L_A;
	m_Input = Input::ROW;
	m_selectedNeutral = 0;
}

void StandardPlayer::playTurn(Board* board)
{
	indicationForLPiece();
	lPieceMovement(board);
	indicationForMovingNetrualPiece();
	indicationForSelectingNetrualPiece();
	inputForNeutralPiece();
	if (m_selectedNeutral != 0)
	{
		nPieceMovement(board);
	}
	endTurn();
}
void StandardPlayer::indicationForSelectingLPiece()
{
	m_stringRenderer->printString("WHERE DO YOU WANT TO MOVE YOUR L PIECE. PLEASE INDICATE A ROW.");
}

void StandardPlayer::indicationForLPiece()
{
	m_stringRenderer->printString("PLAYER " + std::to_string(m_turnOrder) + ", YOU CAN MOVE YOUR L PIECE NOW");
}

void StandardPlayer::indicationForMovingNetrualPiece()
{
	m_stringRenderer->printString("YOU CAN MOVE YOUR NETRUAL PIECE NOW");
}

void StandardPlayer::indicationForSelectingNetrualPiece()
{
	m_stringRenderer->printString("WHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)");
}

void StandardPlayer::inputForNeutralPiece()
{
	while (true)
	{
		int input = m_inputRenderer->getInterger();
		m_selectedNeutral = input;

		if ((input >= 3 && input <= 4) || input == 0)
		{
			if (input == 0)
			{
				m_stringRenderer->printString("YOU DID NOT SELECT A NEUTRAL PIECE");
				break;
			}
			else if (input == 3)
			{
				m_stringRenderer->printString("YOU HAVE SELECTED THE THIRD NEUTRAL PIECE");
				break;
			}
			else if (input == 4)
			{
				m_stringRenderer->printString("YOU HAVE SELECTED THE FOURTH NEUTRAL PIECE");
				break;
			}
		}
		else
		{
			m_stringRenderer->printString("YOU HAVE NOT ENTERED A VALID NUMBER. PLEASE TRY AGAIN.");
		}
	}
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

void StandardPlayer::nPieceMovement(Board* board)
{
	Piece piece;
	if (m_selectedNeutral == 3)
	{
		piece = Piece::NEUTRAL_A;
	}
	else if (m_selectedNeutral == 4)
	{
		piece = Piece::NEUTRAL_B;
	}

	// Constructing the NpPieceMovement
	NPieceMovement movement;
	m_stringRenderer->printString("N piece Movement : " + std::to_string(m_selectedNeutral));
	movement.addCellMovement(getCellMovementInput(piece));

	// Making the Movement
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
