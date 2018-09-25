#include "Male.h"
#include <iostream>

const int maleCost = 5;

Male::Male() : Sex(maleCost)
{
}


Male::~Male()
{
}

void Male::Info()
{
	std::cout << "I am male.\n";
}
