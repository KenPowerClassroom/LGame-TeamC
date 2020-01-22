#pragma once

#include <iostream>

class StandardStringRenderer
{
public:
	StandardStringRenderer(std::ostream& m_output);
	~StandardStringRenderer();
	void printString(std::string t_string);

private:
	std::ostream& m_output;
};
