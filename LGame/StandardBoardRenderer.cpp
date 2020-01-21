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
			switch (boardArray[i][j])
			{
			case 1:
				m_output << "1";
				break;
			case 2:
				m_output << "2";
				break;
			case 3:
				m_output << "3";
				break;
			case 4:
				m_output << "4";
				break;
			case 5:
				m_output << "5";
				break;
			default:
				m_output << "0";
				break;
			}
		}
	}

}
