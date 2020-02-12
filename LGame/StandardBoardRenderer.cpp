#include "StandardBoardRenderer.h"

StandardBoardRenderer::StandardBoardRenderer(StringRenderer* t_stringRenderer)
	: m_stringRenderer(t_stringRenderer)
{
}

void StandardBoardRenderer::renderBoard(int boardArray[4][4])
{
	m_stringRenderer->printString("   A B C D"); // first row 
	for (int i = 0; i < 4; i++) //each row
	{
		std::string lineString = "";
		lineString += std::to_string(i+1) + ":"; //user displayed row index starting at 1
		for (int j = 0; j < 4; j++) //each cell
		{
			lineString += " ";
			if (boardArray[i][j] > 0 && boardArray[i][j] < 5)
			{
				lineString += std::to_string(boardArray[i][j]);
			}
			else
			{
				lineString += "0";
			}
		}
		m_stringRenderer->printString(lineString);
	}

}
