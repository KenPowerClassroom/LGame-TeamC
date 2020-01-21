#include "StandardBoardRenderer.h"

StandardBoardRenderer::StandardBoardRenderer(std::ostream& output) 
	: m_output(output)
{
}

void StandardBoardRenderer::renderBoard(int boardArray[4][4])
{
	std::string displayString;

	m_output << "   A B C D";
	for (int i = 0; i < 4; i++)
	{
		m_output << "\n" << std::to_string(i+1) << ":";
		for (int j = 0; j < 4; j++)
		{
			m_output << " ";
			if (boardArray[i][j] > 0 && boardArray[i][j] < 5)
			{
				m_output << std::to_string(boardArray[i][j]);
			}
			else
			{
				m_output << "0";
			}
		}
	}

}
