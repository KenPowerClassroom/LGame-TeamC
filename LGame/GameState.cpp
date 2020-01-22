#include "GameState.h"

GameState::GameState(std::ostream& t_outPut) 
	: stringRenderer(t_outPut)
{
}

GameState::~GameState()
{
}

void GameState::selectNeutralPiece()
{
	if (m_currentPlayer == PlayerStages::FirstPlayer )
	{
		stringRenderer.printString("PLAYER 1: YOU CAN MOVE THE NEUTRAL PIECE");
	}

	if (m_currentPlayer == PlayerStages::SecondPlayer)
	{
		stringRenderer.printString("PLAYER 2: YOU CAN MOVE THE NEUTRAL PIECE");
	}
}
