#pragma once
#include <string>
#include "ITracker.h"
class SlaveTracker : public ITracker
{
public:
	SlaveTracker();
	virtual ~SlaveTracker() override;
	
	virtual void Info(std::string msg) override;
};

