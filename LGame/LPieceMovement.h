#pragma once
#include "PieceMovement.h"
class LPieceMovement : public PieceMovement
{
public:
	LPieceMovement();
	void addCellMovement(CellMovement movement);
	std::vector<CellMovement> getCellMovement() const;

private:
	std::vector<CellMovement> cells;
};


