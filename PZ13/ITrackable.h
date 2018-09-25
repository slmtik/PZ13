#pragma once
#include "ITracker.h"
//interface with methods to make class trackable and notify tracker about changes
class ITrackable
{
public:
	virtual void RegisterTracker(ITracker* sv) = 0;
	virtual void NotifyTracker() = 0;
	virtual ~ITrackable() {}
};

