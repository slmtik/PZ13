#include "SlaveAdapter.h"
#include <iostream>



SlaveAdapter::SlaveAdapter(Slave* s) :_s(s)
{
}


SlaveAdapter::~SlaveAdapter()
{
}

void SlaveAdapter::DoWork()
{
	std::cout << "Hey, it's me " + _s->Name() + ". And I can do work as worker too!\n";
}
