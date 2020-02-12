#include "StandardPlayer.h"

StandardPlayer::StandardPlayer(StringRenderer* t_stringRenderer, std::istream& t_input) :
	m_stringRenderer(t_stringRenderer),
	m_input(t_input)
{

}

void StandardPlayer::playTurn()
{
	indicationForNetrualPiece();
}

void StandardPlayer::indicationForNetrualPiece()
{
	m_stringRenderer->printString("YOU CAN MOVE YOUR NETRUAL PIECE NOW");
	m_stringRenderer->printString("WHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)");
}
