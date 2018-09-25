#include "Elf.h"
#include <iostream>

const int elfCost = 10;

Elf::Elf() : Race(elfCost)
{
}


Elf::~Elf()
{
}

void Elf::Info()
{
	std::cout << "I am elf.\n";
}
