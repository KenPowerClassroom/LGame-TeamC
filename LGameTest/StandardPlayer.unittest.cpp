#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/StandardPlayer.h"
#include "../LGame/StandardStringRenderer.h"

TEST(StandardPlayer, firstTest) {
  EXPECT_TRUE(true);
}

TEST(StandardBoardRenderer, ShowYouCanMoveNeturalPiece)
{
	std::ostringstream capturedOutput;
	std::istream& input();
	StandardStringRenderer textRenderer(capturedOutput);
	StandardPlayer player(textRenderer, input);
	EXPECT_EQ(capturedOutput.str(), "YOU CAN MOVE YOUR NETRUAL PIECE NOW");
}
