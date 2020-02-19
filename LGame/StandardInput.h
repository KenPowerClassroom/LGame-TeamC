#pragma once
#include "Input.h"
class StandardInput : public InputInterface
{
private:
	std::istream& m_instream;
	std::ostream& m_ostream;
public:
	StandardInput(std::istream& t_istream, std::ostream& t_ostream) : m_instream(t_istream), m_ostream(t_ostream) {}
	const int getInterger();
};
