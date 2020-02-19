#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/Board.h"


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
