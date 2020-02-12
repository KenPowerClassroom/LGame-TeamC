#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/StandardBoardRenderer.h"
#include "../LGame/StandardStringRenderer.h"
#include <array>

TEST(StandardBoardRenderer, firstTest) {
	EXPECT_TRUE(true);
}

TEST(StandardBoardRenderer, emptyBoard)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {0,0,0,0},
			{0,0,0,0},
			{0,0,0,0},
			{0,0,0,0}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 0 0 0 0\n2: 0 0 0 0\n3: 0 0 0 0\n4: 0 0 0 0\n");
}

TEST(StandardBoardRenderer, boardFullOf1)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {1,1,1,1},
			{1,1,1,1},
			{1,1,1,1},
			{1,1,1,1}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 1 1 1 1\n2: 1 1 1 1\n3: 1 1 1 1\n4: 1 1 1 1\n");
}

TEST(StandardBoardRenderer, boardFullOf2)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {2,2,2,2},
			{2,2,2,2},
			{2,2,2,2},
			{2,2,2,2}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 2 2 2 2\n2: 2 2 2 2\n3: 2 2 2 2\n4: 2 2 2 2\n");
}

TEST(StandardBoardRenderer, boardFullOf3)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {3,3,3,3},
			{3,3,3,3},
			{3,3,3,3},
			{3,3,3,3}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 3 3 3 3\n2: 3 3 3 3\n3: 3 3 3 3\n4: 3 3 3 3\n");
}

TEST(StandardBoardRenderer, boardFullOf4)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {4,4,4,4},
			{4,4,4,4},
			{4,4,4,4},
			{4,4,4,4}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 4 4 4 4\n2: 4 4 4 4\n3: 4 4 4 4\n4: 4 4 4 4\n");
}


TEST(StandardBoardRenderer, initialPosition)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {3,1,1,0},
			{0,2,1,0},
			{0,2,1,0},
			{0,2,2,4}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 3 1 1 0\n2: 0 2 1 0\n3: 0 2 1 0\n4: 0 2 2 4\n");
}

TEST(StandardBoardRenderer, invalidNumbers)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {-4,45,21,5},
			{-0,-1,6,33},
			{12,42,15,24},
			{321,10000,10000000000,-100}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 0 0 0 0\n2: 0 0 0 0\n3: 0 0 0 0\n4: 0 0 0 0\n");
}

TEST(StandardBoardRenderer, mixedNumbers)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer stringRenderer(capturedOutput);
	int board[4][4]
		= { {-45,-2,2,0},
			{42,-12,-6,1},
			{6,3,-3,-2},
			{425,1,-500000003345,1}
	};
	StandardBoardRenderer renderer(&stringRenderer);
	renderer.renderBoard(board);
	EXPECT_EQ(capturedOutput.str(), "   A B C D\n1: 0 0 2 0\n2: 0 0 0 1\n3: 0 3 0 0\n4: 0 1 0 1\n");
}