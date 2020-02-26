#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/Board.h"
#include "CustomPieceMovement.h"


TEST(Board, equalityTest) {
	int data[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	Board b1(nullptr, data);
	Board b2(nullptr, data);
	ASSERT_TRUE(b1 == b2);
}

TEST(Board, inequalityTest) {
	int data[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int data2[4][4]
		= { {1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,16}
	};

	Board b1(nullptr, data);
	Board b2(nullptr, data2);
	ASSERT_FALSE(b1 == b2);
}

TEST(Board, equalityTest2) {
	int data[4][4]
		= { {1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,16}
	};

	int data2[4][4]
		= { {1,2,3,4},
			{5,6,7,8},
			{9,10,11,12},
			{13,14,15,16}
	};

	Board b1(nullptr, data);
	Board b2(nullptr, data2);
	ASSERT_TRUE(b1 == b2);
}

TEST(Board, equalityTest3) {
	int data[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{1,1,1,1},
			{2,2,2,2}
	};

	int data2[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{1,1,1,1},
			{2,2,2,2}
	};

	Board b1(nullptr, data);
	Board b2(nullptr, data2);
	ASSERT_TRUE(b1 == b2);
}

TEST(Board, inequalityTest2) {
	int data[4][4]
		= { {0,0,0,0},
			{0,1,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int data2[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	Board b1(nullptr, data);
	Board b2(nullptr, data2);
	ASSERT_FALSE(b1 == b2);
}

TEST(Board, emptyMovement)
{
	std::vector<CellMovement> movements;
	CustomPieceMovement pieceMovement(movements);

	int data[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	Board b1(nullptr, data);
	Board b2(nullptr, data);
	b1.makeMove(pieceMovement);
	ASSERT_TRUE(b1 == b2);
}


TEST(Board, onPieceMovement) {

	std::vector<CellMovement> movements;
	movements.push_back(CellMovement(1, 1, Piece::L_A));
	CustomPieceMovement pieceMovement(movements);

	int initial[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int final[4][4]
		= { {0,0,0,0},
			{0,1,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	Board initialBoard(nullptr, initial);
	Board finalBoard(nullptr, final);

	initialBoard.makeMove(pieceMovement);

	ASSERT_TRUE(initialBoard == finalBoard);
}

TEST(Board, twoPieceMovement) {

	std::vector<CellMovement> movements;
	movements.push_back(CellMovement(1, 1, Piece::L_A));
	movements.push_back(CellMovement(2, 2, Piece::NEUTRAL_A));
	CustomPieceMovement pieceMovement(movements);

	int initial[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int final[4][4]
		= { {0,0,0,0},
			{0,1,0,0},
			{0,0,3,0},
			{0,0,0,0}
	};

	Board initialBoard(nullptr, initial);
	Board finalBoard(nullptr, final);

	initialBoard.makeMove(pieceMovement);

	ASSERT_TRUE(initialBoard == finalBoard);
}

TEST(Board, LPieceNewMovement) {

	std::vector<CellMovement> movements;
	movements.push_back(CellMovement(1, 1, Piece::L_B));
	movements.push_back(CellMovement(1, 2, Piece::L_B));
	movements.push_back(CellMovement(1, 3, Piece::L_B));
	movements.push_back(CellMovement(2, 3, Piece::L_B));
	CustomPieceMovement pieceMovement(movements);

	int initial[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int final[4][4]
		= { {0,0,0,0},
			{0,2,2,2},
			{0,0,0,2},
			{0,0,0,0}
	};

	Board initialBoard(nullptr, initial);
	Board finalBoard(nullptr, final);

	initialBoard.makeMove(pieceMovement);

	ASSERT_TRUE(initialBoard == finalBoard);
}

TEST(Board, LPieceMovementShouldErasePrevious) {

	std::vector<CellMovement> movements;
	movements.push_back(CellMovement(1, 1, Piece::L_B));
	movements.push_back(CellMovement(1, 2, Piece::L_B));
	movements.push_back(CellMovement(1, 3, Piece::L_B));
	movements.push_back(CellMovement(2, 3, Piece::L_B));
	CustomPieceMovement pieceMovement(movements);

	int initial[4][4]
		= { {0,2,2,0},
			{0,0,2,0},
			{0,0,2,0},
			{0,0,0,0}
	};

	int final[4][4]
		= { {0,0,0,0},
			{0,2,2,2},
			{0,0,0,2},
			{0,0,0,0}
	};

	Board initialBoard(nullptr, initial);
	Board finalBoard(nullptr, final);

	initialBoard.makeMove(pieceMovement);

	ASSERT_TRUE(initialBoard == finalBoard);
}

TEST(Board, NPieceNewMovement) {
	std::vector<CellMovement> movement;
	movement.push_back(CellMovement(2, 2, Piece::NEUTRAL_A));
	CustomPieceMovement pieceMovement(movement);

	int initial[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int final[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,3,0},
			{0,0,0,0}
	};

	Board initialBoard(nullptr, initial);
	Board finalBoard(nullptr, final);

	initialBoard.makeMove(pieceMovement);

	ASSERT_TRUE(initialBoard == finalBoard);
}

TEST(Board, NPieceMovementShouldErasePrevious) {
	std::vector<CellMovement> movement;
	movement.push_back(CellMovement(2, 2, Piece::NEUTRAL_A));
	CustomPieceMovement pieceMovement(movement);

	int initial[4][4]
		= { {0,0,0,0},
			{0,3,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};

	int final[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,3,0},
			{0,0,0,0}
	};

	Board initialBoard(nullptr, initial);
	Board finalBoard(nullptr, final);

	initialBoard.makeMove(pieceMovement);

	ASSERT_TRUE(initialBoard == finalBoard);
}

