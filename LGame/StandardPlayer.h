#pragma once
#include "StringRenderer.h"
#include "Player.h"
#include <string>

class StandardPlayer : Player
{
public:
	StandardPlayer(StringRenderer * t_stringRenderer, std::istream& t_input);
	void playTurn();
	void playerNetural();
	void playerLPiece();

private:
	StringRenderer * m_stringRenderer;
	std::istream& m_input;
	int m_turnOrder;
};
