#pragma once

class Player
{
public:
	virtual void playTurn() = 0;

protected:
	virtual void playerNetural() = 0;
};
