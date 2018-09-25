#pragma once
#include "Sex.h"

//class for male sex attribute
class Male :
	public Sex
{
public:
	Male();
	~Male();

	virtual void Info() override;

};

