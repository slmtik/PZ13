#include "ElfMaleMarket.h"
#include "Elf.h"
#include "Male.h"

ElfMaleMarket::ElfMaleMarket()
{

}

ElfMaleMarket::~ElfMaleMarket()
{

}

Race* ElfMaleMarket::GetRace()
{
	return new class Elf();
}

Sex* ElfMaleMarket::GetSex()
{
	return new class Male();
}
