#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/StandardPlayer.h"
#include "../LGame/StandardStringRenderer.h"

TEST(StandardPlayer, firstTest) {
  EXPECT_TRUE(true);
}

//TEST(StandardPlayer, ShowYouCanMoveNeturalPiece)
//{
//	std::ostringstream capturedOutput;
//	std::istringstream input;
//	StandardStringRenderer textRenderer(capturedOutput);
//	StandardPlayer player(&textRenderer, input);
//	player.indicationForNetrualPiece();
//	EXPECT_EQ(capturedOutput.str(), "YOU CAN MOVE YOUR NETRUAL PIECE NOW\nWHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)\n");
//}
//
//TEST(StandardPlayer, ShowYouCanMoveTheLPiece)
//{
//	std::ostringstream capturedOutput;
//	std::istringstream input;
//	StandardStringRenderer textRenderer(capturedOutput);
//	StandardPlayer player(&textRenderer, input);
//	player.indicationForLPiece();
//	EXPECT_EQ(capturedOutput.str(), "PLAYER 1, YOU CAN MOVE YOUR L PIECE NOW\n");
//}