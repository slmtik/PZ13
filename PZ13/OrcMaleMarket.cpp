#include "OrcMaleMarket.h"
#include "Orc.h"
#include "Male.h"

OrcMaleMarket::OrcMaleMarket()
{
}


OrcMaleMarket::~OrcMaleMarket()
{
}

Race* OrcMaleMarket::GetRace()
{
	return new class Orc();
}

Sex* OrcMaleMarket::GetSex()
{
	return new class Male();
}