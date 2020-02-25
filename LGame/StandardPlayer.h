#pragma once
#include "StringRenderer.h"
#include "Player.h"
#include "InputInterface.h"
#include "LPieceMovement.h"
#include "Piece.h"
#include "Inputs.h"
#include "PieceMovement.h"


class StandardPlayer : public Player
{
public:
	StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer, int t_turnOrder);
	void playTurn(Board* board);
	void indicationForNetrualPiece();
	void indicationForSelectingLPiece();
	void indicationForLPiece();
	void lPieceMovement(Board* board);
	CellMovement getCellMovementInput(Piece piece);
	void endTurn();

private:
	StringRenderer* m_stringRenderer;
	InputInterface* m_inputRenderer;
	Piece m_Piece;
	Input m_Input;
	int m_turnOrder;
};
