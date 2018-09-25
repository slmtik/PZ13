#pragma once
#include "SlaveMarket.h"
//factory that creates elf female slaves
class ElfFemaleMarket :
	public SlaveMarket
{
public:
	ElfFemaleMarket();

	~ElfFemaleMarket();


	virtual Race* GetRace() override;


	virtual Sex* GetSex() override;

};


