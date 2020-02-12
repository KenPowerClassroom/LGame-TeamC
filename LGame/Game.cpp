#include "Game.h"

Game::Game(Player* playerA, Player* playerB, Board* board) : 
	m_playerA(playerA),
	m_playerB(playerB),
	m_board(board)
{
}

Game::~Game()
{
}

void Game::run()
{
	bool gameOver = false;

	while (!gameOver)
	{
		m_board->renerBoard();
		m_playerA->playTurn();
		m_board->renerBoard();
		m_playerB->playTurn();
		
	}
}
