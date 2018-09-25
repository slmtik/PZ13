#include "ElfFemaleMarket.h"
#include "Elf.h"
#include "Female.h"


ElfFemaleMarket::ElfFemaleMarket()
{

}

ElfFemaleMarket::~ElfFemaleMarket()
{

}

Race* ElfFemaleMarket::GetRace()
{
	return new Elf();
}

Sex* ElfFemaleMarket::GetSex()
{
	return new Female();
}
