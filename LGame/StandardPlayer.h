#pragma once
#include "StringRenderer.h"
#include "Player.h"
#include "InputInterface.h"
#include "LPieceMovement.h"
#include "Piece.h"
#include "Inputs.h"


class StandardPlayer : public Player
{
public:
	StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer, CellMovement t_cellMovement, int t_turnOrder);
	void startTurn();
	void indicationForNetrualPiece();
	void indicationForSelectingLPiece();
	void indicationForLPiece();
	void inputForLPiece();
	void endTurn();

private:
	StringRenderer* m_stringRenderer;
	InputInterface* m_inputRenderer;
	CellMovement m_lPieceMovement;
	Piece m_Piece;
	Input m_Input;
	int m_turnOrder;
};
