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
		for (int i = 0; i < 4; i++)
		{
			m_output << " ";
			m_output << "0";
		}
	}

}
