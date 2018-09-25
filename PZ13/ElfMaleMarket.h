#pragma once
#include "SlaveMarket.h"
//factory that creates elf male slaves
class ElfMaleMarket :
	public SlaveMarket
{
public:
	ElfMaleMarket();

	~ElfMaleMarket();


	virtual Race* GetRace() override;


	virtual Sex* GetSex() override;

};


