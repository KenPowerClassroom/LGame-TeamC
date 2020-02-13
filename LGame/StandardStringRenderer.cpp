#include "StandardStringRenderer.h"

StandardStringRenderer::StandardStringRenderer(std::ostream& t_output) 
	: m_output(t_output)
{
}

StandardStringRenderer::~StandardStringRenderer()
{
}

void StandardStringRenderer::printString(std::string t_string) const
{
	m_output << t_string << std::endl;
}
