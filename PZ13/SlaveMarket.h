#pragma once
#include <string>
#include "Race.h"
#include "Sex.h"

//base factory class
class SlaveMarket
{
public:
	SlaveMarket();
	virtual ~SlaveMarket();
	virtual Race* GetRace() = 0;
	virtual Sex* GetSex() = 0;
};

