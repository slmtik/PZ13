#pragma once
#include "SlaveMarket.h"
//factory that creates orc male slaves
class OrcMaleMarket :
	public SlaveMarket
{
public:
	OrcMaleMarket();
	~OrcMaleMarket();

	virtual Race* GetRace() override;


	virtual Sex* GetSex() override;

};

