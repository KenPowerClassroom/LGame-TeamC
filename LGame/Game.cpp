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
	bool gameOver = false; // False
	m_board->render();
	while (!gameOver)
	{
		m_playerA->startTurn();
		m_board->render();
		m_playerB->startTurn();
		m_board->render();
	}
}
