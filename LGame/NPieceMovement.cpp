#include "NPieceMovement.h"

NPieceMovement::NPieceMovement()
{

}

void NPieceMovement::addCellMovement(CellMovement movement)
{
	cells.push_back(movement);
}

std::vector<CellMovement> NPieceMovement::getCellMovement() const
{
	return cells;
}
