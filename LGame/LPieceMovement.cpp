#include "LPieceMovement.h"

LPieceMovement::LPieceMovement()
{

}

void LPieceMovement::addCellMovement(CellMovement movement)
{
	cells.push_back(movement);
}

std::vector<CellMovement> LPieceMovement::getCellMovement() const
{
	return cells;
}
