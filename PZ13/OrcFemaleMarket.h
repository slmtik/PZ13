#pragma once
#include "SlaveMarket.h"
//factory that creates orc female slaves
class OrcFemaleMarket :
	public SlaveMarket
{
public:
	OrcFemaleMarket();
	~OrcFemaleMarket();

	virtual Race* GetRace() override;


	virtual Sex* GetSex() override;

};

