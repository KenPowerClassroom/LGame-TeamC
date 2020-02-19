#pragma once
#include "Piece.h"
#include <vector>

struct CellMovement
{
	int newRow;
	int newColomn;
	Piece piece;

	CellMovement(int row, int colomn, Piece pieceToMove) : 
	newRow(row), newColomn(colomn), piece(pieceToMove)
	{}

};

class PieceMovement
{
public: 
	virtual std::vector<CellMovement> getCellMovement() = 0;
};

