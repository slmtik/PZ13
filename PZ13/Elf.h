#pragma once
#include "Race.h"

//class for elf race attribute
class Elf :
	public Race
{
public:
	Elf();
	~Elf();

	virtual void Info() override;

};

