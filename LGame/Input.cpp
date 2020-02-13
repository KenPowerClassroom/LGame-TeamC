#include "Input.h"

std::string Input::getInput() const
{
	std::string lMovement;

	std::cout << "\n\nEnter the new position for your L piece : ";

	std::cin >> lMovement;

	return lMovement;
}
