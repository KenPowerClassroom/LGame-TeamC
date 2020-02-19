#pragma once
#include "StringRenderer.h"
#include "Player.h"
#include "Input.h"
#include <string>

class StandardPlayer : public Player
{
public:
	StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer, int t_turnOrder);
	void startTurn();
	void indicationForNetrualPiece();
	void indicationForLPiece();
	void endTurn();

private:
	StringRenderer* m_stringRenderer;
	InputInterface* m_inputRenderer;
	int m_turnOrder;
};
