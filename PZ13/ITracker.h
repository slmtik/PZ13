#pragma once
#include <string>
//interface for tracker with method to notify about changes
class ITracker
{
public:
	virtual ~ITracker() {}
	virtual void Info(std::string msg) = 0;
};

