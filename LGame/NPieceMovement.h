#pragma once
#include "PieceMovement.h"
class NPieceMovement : public PieceMovement
{
public:
	NPieceMovement();
	void addCellMovement(CellMovement movement);
	std::vector<CellMovement> getCellMovement() const;

private:
	std::vector<CellMovement> cells;
};

