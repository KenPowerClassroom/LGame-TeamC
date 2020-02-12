#pragma once
#include "StringRenderer.h"
#include "Player.h"

class StandardPlayer : Player
{
public:
	StandardPlayer(StringRenderer& t_stringRenderer, std::istream& t_input);
	void playTurn();
	void playerNetural();

private:
	StringRenderer& m_stringRenderer;
	std::istream& m_input;
};
