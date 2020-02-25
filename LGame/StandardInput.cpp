#include "StandardInput.h"

const char StandardInput::getInput()
{
	char input{ 't' };
	do {
		m_input >> input;
		if (!m_input.fail())
		{
			break;
			m_input.clear();
			m_input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

	} while (true);
	return input;
}
