#include "pch.h"
#include "gtest/gtest.h"
#include "../LGame/StandardPlayer.h"
#include "../LGame/StandardStringRenderer.h"
#include "pch.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "../LGame/StandardPlayer.h"
#include "../LGame/StandardStringRenderer.h"
#include "..//LGame/StandardInput.h"

using ::testing::Return;

class MockInput : public InputInterface {

public:

	MOCK_METHOD(const int, getInterger, (), (override));
	MOCK_METHOD(const char, getInput, (), (override));


};


TEST(StandardPlayer, firstTest) {
	EXPECT_TRUE(true);
}

TEST(StandardPlayer, ShowYouCanMoveNeturalPiece)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardInput input(std::cout, std::cin);
	StandardPlayer player(&textRenderer, &input, 1);
	player.indicationForMovingNetrualPiece();
	EXPECT_EQ(capturedOutput.str(), "YOU CAN MOVE YOUR NETRUAL PIECE NOW\n");
}

TEST(StandardPlayer, ShowYouCanMoveTheLPiece)
{
	std::ostringstream capturedOutput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardInput input(std::cout, std::cin);
	StandardPlayer player(&textRenderer, &input, 1);
	player.indicationForLPiece();
	EXPECT_EQ(capturedOutput.str(), "PLAYER 1, YOU CAN MOVE YOUR L PIECE NOW\n");
}

TEST(StandardPlayer, ShowYouCanSelectANeturalPiece)
{
	std::ostringstream capturedOutput;
	std::istringstream capturedInput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardInput input(capturedOutput, capturedInput);
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

TEST(StandardPlayer, InputThirdValueForNeutralPiece)
{
	std::ostringstream capturedOutput;
	MockInput mockInput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardPlayer player(&textRenderer, &mockInput, 1);
	EXPECT_CALL(mockInput, getInterger)
		.WillOnce(Return(3));

	player.inputForNeutralPiece();
	EXPECT_EQ(capturedOutput.str(), "YOU HAVE SELECTED THE THIRD NEUTRAL PIECE\n");
}

TEST(StandardPlayer, InputFourthValueForNeutralPiece)
{
	std::ostringstream capturedOutput;
	MockInput mockInput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardPlayer player(&textRenderer, &mockInput, 1);
	EXPECT_CALL(mockInput, getInterger)
		.WillOnce(Return(4));

	player.inputForNeutralPiece();
	EXPECT_EQ(capturedOutput.str(), "YOU HAVE SELECTED THE FOURTH NEUTRAL PIECE\n");
}

TEST(StandardPlayer, InputWrongValueForNeutralPiece)
{
	std::ostringstream capturedOutput;
	MockInput mockInput;
	StandardStringRenderer textRenderer(capturedOutput);
	StandardPlayer player(&textRenderer, &mockInput, 1);
	EXPECT_CALL(mockInput, getInterger)
		.WillOnce(Return(55))
		.WillOnce(Return(0));

	player.inputForNeutralPiece();
	EXPECT_EQ(capturedOutput.str(), "YOU HAVE NOT ENTERED A VALID NUMBER. PLEASE TRY AGAIN.\nYOU DID NOT SELECT A NEUTRAL PIECE\n");
}