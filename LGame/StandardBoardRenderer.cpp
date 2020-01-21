#include "StandardBoardRenderer.h"

StandardBoardRenderer::StandardBoardRenderer(std::ostream& output) 
	: m_output(output)
{
}

void StandardBoardRenderer::renderBoard(int boardArray[4][4])
{
	m_output << "   A B C D"; // first row 
	for (int i = 0; i < 4; i++) //each row
	{
		m_output << "\n" << std::to_string(i+1) << ":"; //user displayed row index starting at 1
		for (int j = 0; j < 4; j++) //each cell
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
