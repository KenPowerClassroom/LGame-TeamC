#pragma once

#include <iostream>
#include <string>

class StringRenderer
{
public:
	virtual void printString(std::string t_string) = 0;
};
