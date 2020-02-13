#pragma once
#include "StringRenderer.h"
#include "Player.h"
#include <string>

class StandardPlayer : public Player
{
public:
	StandardPlayer(StringRenderer* t_stringRenderer, std::istream& t_input, int t_turnOrder);
	void startTurn();
	void indicationForNetrualPiece();
	void indicationForLPiece();
	void endTurn();

private:
	StringRenderer* m_stringRenderer;
	std::istream& m_input;
	int m_turnOrder;
};
