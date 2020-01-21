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
			if (boardArray[i][j] == 0)
			{
				m_output << "0";
			}
			else if (boardArray[i][j] == 1)
			{
				m_output << "1";
			}
		}
	}

}
