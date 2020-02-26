#pragma once
#include "InputInterface.h"
class StandardInput : public InputInterface
{
public:
	StandardInput(std::ostream& t_output, std::istream& t_input) : m_output(t_output), m_input(t_input) {}
	const char getInput() override;
	const int getInterger() override;

private:
	std::istream& m_input;
	std::ostream& m_output;
};
