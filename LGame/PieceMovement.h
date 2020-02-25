#pragma once
#include <String>
#include <vector>
#include "Piece.h"
struct CellMovement
{
	int newRow;
	int newCol;
	Piece piece;

	CellMovement() {};
	CellMovement(int row, int column, Piece pieceToMove) :
		newRow(row), newCol(column), piece(pieceToMove)
	{}

};

class PieceMovement
{
public:
	virtual std::vector<CellMovement> getCellMovement() const = 0;
};
