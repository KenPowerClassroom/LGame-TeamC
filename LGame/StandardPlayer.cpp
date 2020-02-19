#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer, int t_turnOrder) :
	m_stringRenderer(t_stringRenderer),
	m_inputRenderer(t_inputRenderer),
	m_turnOrder(t_turnOrder)
{
}

void StandardPlayer::startTurn()
{
	indicationForLPiece();
	indicationForNetrualPiece();
	endTurn();
}

void StandardPlayer::indicationForNetrualPiece()
{
	std::string playerInput;
	m_stringRenderer->printString("YOU CAN MOVE YOUR NETRUAL PIECE NOW");
	m_stringRenderer->printString("WHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)");

	while (true)
	{
		int input = m_inputRenderer->getInterger();

		if((input >= 3 && input <= 4) || input == 0)
		{ 
			if (input == 0)
			{
				m_stringRenderer->printString("YOU DID NOT SELECT A NEUTRAL PIECE");
				break;
			}
			else if (input == 3)
			{
				m_stringRenderer->printString("YOU HAVE SELECTED THE " + std::to_string(input) + "NEUTRAL PIECE");
				break;
			}
			else if (input == 4)
			{
				m_stringRenderer->printString("YOU HAVE SELECTED THE " + std::to_string(input) + "NEUTRAL PIECE");
				break;
			}
		}
		else
		{
			m_stringRenderer->printString("YOU HAVE NOT ENTERED A VALID NUMBER. PLEASE TRY AGAIN.");
		}
	}
}

void StandardPlayer::indicationForLPiece()
{
	m_stringRenderer->printString("PLAYER " + std::to_string(m_turnOrder) + ", YOU CAN MOVE YOUR L PIECE NOW");
}

void StandardPlayer::endTurn()
{
	system("PAUSE");
	system("CLS");
}
