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

TEST(StandardBoardRenderer, boardFullOf2)
{
	std::ostringstream capturedOutput;
	int board[4][4]
		= { {2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2}
	};
	StandardBoardRenderer renderer(capturedOutput);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 2 2 2 2\n2: 2 2 2 2\n3: 2 2 2 2\n4: 2 2 2 2");
}

TEST(StandardBoardRenderer, boardFullOf3)
{
	std::ostringstream capturedOutput;
	int board[4][4]
		= { {3,3,3,3},
			{3,3,3,3},
			{3,3,3,3},
			{3,3,3,3}
	};
	StandardBoardRenderer renderer(capturedOutput);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 3 3 3 3\n2: 3 3 3 3\n3: 3 3 3 3\n4: 3 3 3 3");
}

TEST(StandardBoardRenderer, boardFullOf4)
{
	std::ostringstream capturedOutput;
	int board[4][4]
		= { {4,4,4,4},
			{4,4,4,4},
			{4,4,4,4},
			{4,4,4,4}
	};
	StandardBoardRenderer renderer(capturedOutput);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 4 4 4 4\n2: 4 4 4 4\n3: 4 4 4 4\n4: 4 4 4 4");
}


TEST(StandardBoardRenderer, initialPosition)
{
	std::ostringstream capturedOutput;
	int board[4][4]
		= { {3,1,1,0},
			{0,2,1,0},
			{0,2,1,0},
			{0,2,2,4}
	};
	StandardBoardRenderer renderer(capturedOutput);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 3 1 1 0\n2: 0 2 1 0\n3: 0 2 1 0\n4: 0 2 2 4");
}