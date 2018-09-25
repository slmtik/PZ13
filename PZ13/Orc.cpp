#include "Orc.h"
#include <iostream>

const int orcCost = 5;

Orc::Orc() : Race(orcCost)
{
}


Orc::~Orc()
{
}

void Orc::Info()
{
	std::cout << "I am orc.\n";
}
