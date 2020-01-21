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

TEST(StandardBoardRenderer, boardFullOf1)
{
	std::ostringstream capturedOutput;
	int board[4][4]
		= { {1,1,1,1},
			{1,1,1,1},
			{1,1,1,1},
			{1,1,1,1}
	};
	StandardBoardRenderer renderer(capturedOutput);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 1 1 1 1\n2: 1 1 1 1\n3: 1 1 1 1\n4: 1 1 1 1");
}