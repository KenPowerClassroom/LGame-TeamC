#pragma once

class Player
{
public:
	virtual void startTurn() = 0;
protected:
	virtual void indicationForNetrualPiece() = 0;
	virtual void indicationForLPiece() = 0;
	virtual void endTurn() = 0;
};
