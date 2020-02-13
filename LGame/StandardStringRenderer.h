#pragma once

#include <iostream>
#include "StringRenderer.h"

class StandardStringRenderer : public StringRenderer
{
public:
	StandardStringRenderer(std::ostream& m_output);
	~StandardStringRenderer();
	void printString(std::string t_string) const;

private:
	std::ostream& m_output;
};
