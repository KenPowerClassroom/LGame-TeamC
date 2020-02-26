#pragma once
#include "StringRenderer.h"
#include "Player.h"
#include "InputInterface.h"
#include "LPieceMovement.h"
#include "NPieceMovement.h"
#include "Piece.h"
#include "Inputs.h"
#include "PieceMovement.h"


class StandardPlayer : public Player
{
public:
	StandardPlayer(StringRenderer* t_stringRenderer, InputInterface* t_inputRenderer, int t_turnOrder);
	void playTurn(Board* board);
	void indicationForSelectingLPiece();
	void indicationForLPiece();
	void indicationForMovingNetrualPiece();
	void indicationForSelectingNetrualPiece();
	void inputForNeutralPiece();
	void lPieceMovement(Board* board);
	void nPieceMovement(Board* board);
	CellMovement getCellMovementInput(Piece piece);
	void endTurn();

private:
	StringRenderer* m_stringRenderer;
	InputInterface* m_inputRenderer;
	Piece m_Piece;
	Input m_Input;
	int m_turnOrder;
	int m_selectedNeutral;
};
