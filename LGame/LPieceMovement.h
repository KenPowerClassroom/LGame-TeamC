#pragma once
#include "PieceMovement.h"
class LPieceMovement : public PieceMovement
{
public:
	LPieceMovement(std::string t_str);
	std::vector<CellMovement> getCellMovement() const;

private:
	std::vector<CellMovement> cells;
};


