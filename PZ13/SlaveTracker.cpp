#include "SlaveTracker.h"
#include <iostream>

SlaveTracker::SlaveTracker()
{
}


SlaveTracker::~SlaveTracker()
{
}

void SlaveTracker::Info(std::string msg)
{
	std::cout << "!!Tracker notification: " + msg;
}
