#include "Slave.h"
#include <iostream>

Slave::Slave(std::string name, SlaveMarket* market)
{
	_name = name;
	_race = market->GetRace();
	_sex = market->GetSex();
	_cost = _race->Cost() + _sex->Cost();
}


Slave::~Slave()
{
	delete _race;
	delete _sex;
}

void Slave::Info()
{
	std::cout << "My name is " << _name << std::endl;
	_race->Info();
	_sex->Info();
}

int Slave::Cost() const
{
	return _cost;
}

std::string Slave::Name() const
{
	return _name;
}

void Slave::RegisterTracker(ITracker* sv)
{
	_slaveTracker = sv;
	std::cout << "Slave was registered.\n";
}

void Slave::NotifyTracker()
{
	_slaveTracker->Info(_name + " is on run.\n");
}

void Slave::Run()
{
	std::cout << "*" + _name + " started to running away.*\n";
	NotifyTracker();
}

void Slave::DoSlaveWork()
{
	std::cout << "I am doing slave work.\n";
}
