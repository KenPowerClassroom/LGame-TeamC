#pragma once

#include <iostream>

class StringRenderer
{
public:
	virtual void printString(std::string t_string) const = 0;
};
