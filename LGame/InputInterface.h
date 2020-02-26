#pragma once
#include <iostream>
#include <string>
class InputInterface
{
public:
	virtual const char getInput() = 0;
	virtual const int getInterger() = 0;
};