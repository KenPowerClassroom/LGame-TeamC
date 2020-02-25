#include "Game.h"

Game::Game(Player* t_playerA, Player* t_playerB, Board* t_board) : 
	m_playerA(t_playerA),
	m_playerB(t_playerB),
	m_board(t_board)
{
}

Game::~Game()
{
}

void Game::run()
{
	bool gameOver = false;
	m_board->render();
	while (!gameOver)
	{
		m_playerA->playTurn(m_board);
		m_board->render();
		m_playerB->playTurn(m_board);
		m_board->render();
	}
}
