#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/StandardBoardRenderer.h"
#include <array>

TEST(StandardBoardRenderer, firstTest) {
	EXPECT_TRUE(true);
}

TEST(StandardBoardRenderer, emptyBoard)
{
	std::ostringstream capturedOutput;
	int board[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};
	StandardBoardRenderer renderer(capturedOutput);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 0 0 0 0\n2: 0 0 0 0\n3: 0 0 0 0\n4: 0 0 0 0");
}