#include "StandardInput.h"

const int StandardInput::getInterger()
{
	int input{ 0 };
	do {
		do {
			m_instream >> input;
			if (!m_instream.fail())
			{
				break;
				m_instream.clear();
				m_instream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		} while (true);
	} while (true);
	return input;
}
