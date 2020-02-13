#pragma once

#include "Board.h"
#include "Player.h"

class Game
{
public:
	Game(Player* playerA, Player* playerB, Board* board);
	~Game();
	void run();
private:

	Player* m_playerA;
	Player* m_playerB;
	Board* m_board;
};
