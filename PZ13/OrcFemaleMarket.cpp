#include "OrcFemaleMarket.h"
#include "Orc.h"
#include "Female.h"


OrcFemaleMarket::OrcFemaleMarket()
{

}

OrcFemaleMarket::~OrcFemaleMarket()
{

}

Race* OrcFemaleMarket::GetRace()
{
	return new Orc();
}

Sex* OrcFemaleMarket::GetSex()
{
	return new Female();
}
