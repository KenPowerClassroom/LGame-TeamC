#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/StandardPlayer.h"
#include "../LGame/StandardStringRenderer.h"
#include "..//LGame/StandardInput.h"
#include "gmock/gmock.h"

using ::testing::Return;

TEST(StandardPlayer, firstTest) {
  EXPECT_TRUE(true);
}


class MockInput : public InputInterface {

public:

	MOCK_METHOD(const int, getInterger, (), (override));

};

TEST(StandardPlayer, ShowYouCanMoveNeturalPiece)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardInput input(std::cin, std::cout);
	StandardPlayer player(&textRenderer, &input, 1);
	player.indicationForMovingNetrualPiece();
	EXPECT_EQ(capturedOutput.str(), "YOU CAN MOVE YOUR NETRUAL PIECE NOW\n");
}

TEST(StandardPlayer, ShowYouCanMoveTheLPiece)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardInput input(std::cin, std::cout);
	StandardPlayer player(&textRenderer, &input, 1);
	player.indicationForLPiece();
	EXPECT_EQ(capturedOutput.str(), "PLAYER 1, YOU CAN MOVE YOUR L PIECE NOW\n");
}

TEST(StandardPlayer, ShowYouCanSelectANeturalPiece)
{
	std::ostringstream capturedOutput;
	std::istringstream capturedInput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardInput input(capturedInput, capturedOutput);
	StandardPlayer player(&textRenderer, &input, 1);
	player.indicationForSelectingNetrualPiece();
	EXPECT_EQ(capturedOutput.str(), "WHICH NETRUAL PIECE DO YOU WANT TO MOVE (3 OR 4)\n");
}

TEST(StandardPlayer, InputZeroValueForNeutralPiece)
{
	std::ostringstream capturedOutput;
	MockInput mockInput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardPlayer player(&textRenderer, &mockInput, 1);
	EXPECT_CALL(mockInput, getInterger)
		.WillOnce(Return(0));

	player.inputForNeutralPiece();
	EXPECT_EQ(capturedOutput.str(), "YOU DID NOT SELECT A NEUTRAL PIECE\n");
}
