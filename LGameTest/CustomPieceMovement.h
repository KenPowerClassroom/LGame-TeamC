#pragma once
#include "../LGame/PieceMovement.h"

class CustomPieceMovement : public PieceMovement
{
public:
	CustomPieceMovement(std::vector<CellMovement> movements) : 
		m_movements(movements)
	{

	}

	virtual std::vector<CellMovement> getCellMovement() const
	{
		return m_movements;
	}


private: 
	std::vector<CellMovement> m_movements;

};

