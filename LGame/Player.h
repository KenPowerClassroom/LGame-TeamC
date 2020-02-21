#pragma once

class Player
{
public:
	virtual void startTurn() = 0;
protected:
	virtual void indicationForMovingNetrualPiece() = 0;
	virtual void indicationForLPiece() = 0;
	virtual void endTurn() = 0;
	virtual void indicationForSelectingNetrualPiece() = 0;
};
