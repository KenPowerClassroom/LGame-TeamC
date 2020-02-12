#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, std::istream& t_input) :
	m_stringRenderer(t_stringRenderer),
	m_input(t_input),
	m_turnOrder(2)
{

}

void StandardPlayer::playTurn()
{
	playerLPiece();
	indicationForNetrualPiece();
}

void StandardPlayer::indicationForNetrualPiece()
{
	std::string playerInput;
	m_stringRenderer->printString("YOU CAN MOVE YOUR NETRUAL PIECE NOW");
	m_stringRenderer->printString("WHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)");
	m_input >> playerInput;
}

void StandardPlayer::playerLPiece()
{
	std::string playerInput;
	if (m_turnOrder == 1)
	{
		m_turnOrder = 2;
	}
	else if (m_turnOrder == 2)
	{
		m_turnOrder = 1;
	}
	m_stringRenderer->printString("PLAYER " + std::to_string(m_turnOrder) + ", YOU CAN MOVE YOUR L PIECE NOW");
	m_input >> playerInput;
}
