#pragma once
#include "Worker.h"
#include "Slave.h"
//class for adapting slave class interface to worker class interface
//adapter in inherited from worker class and have access to slave class
//this allows us to use any data or methods from slave class as worker class
class SlaveAdapter :
	public Worker
{
	Slave* _s;
public:
	SlaveAdapter(Slave* s);
	virtual ~SlaveAdapter();

	virtual void DoWork() override;

};

