#pragma once
#include "Race.h"

//class for orc race attribute
class Orc :
	public Race
{
public:
	Orc();
	~Orc();

	virtual void Info() override;

};

