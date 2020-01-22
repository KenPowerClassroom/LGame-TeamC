#pragma once
#include<iostream>
#include "StandardStringRenderer.h"

enum class PlayerStages { FirstPlayer, SecondPlayer };

class GameState
{
public:
	GameState(std::ostream& t_outPut);
	~GameState();
	

	void selectNeutralPiece();

private:
	StandardStringRenderer stringRenderer;
	PlayerStages m_currentPlayer = PlayerStages::FirstPlayer;
};
