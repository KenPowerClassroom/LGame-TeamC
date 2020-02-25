#pragma once
#include <String>
#include "Piece.h"
#include <vector>

struct CellMovement
{
	int newRow;
	int newCol;
	Piece piece;

	CellMovement() :
		newRow(0), newCol(0), piece(Piece::L_A)
	{
	}

	CellMovement(int row, int colomn, Piece pieceToMove) : 
	newRow(row), newCol(colomn), piece(pieceToMove)
	{}

};

class PieceMovement
{
public:
	virtual std::vector<CellMovement> getCellMovement() const = 0;
};

