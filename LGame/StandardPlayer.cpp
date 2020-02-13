#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, std::istream& t_input, int t_turnOrder) :
	m_stringRenderer(t_stringRenderer),
	m_input(t_input),
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
