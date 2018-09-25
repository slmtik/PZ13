#include "Female.h"
#include <iostream>

const int femaleCost = 20;

Female::Female() : Sex(femaleCost)
{
}


Female::~Female()
{
}

void Female::Info()
{
	std::cout << "I am female.\n";
}
