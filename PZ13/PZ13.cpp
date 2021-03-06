#include <iostream>
#include "Slave.h"
#include "OrcMaleMarket.h"
#include "OrcFemaleMarket.h"
#include "ElfMaleMarket.h"
#include "ElfFemaleMarket.h"
#include "ElfMaleMarket.h"
#include <string>
#include "SlaveTracker.h"
#include "Worker.h"
#include "SlaveAdapter.h"

using namespace std;

enum RaceType
{
	Orc,
	Elf
};

enum SexType
{
	Male,
	Female
};

//user selecting race for slave
RaceType RaceSelect()
{
	int option;
	RaceType race;
	cout << "Which race you prefer?\n";
	cout << " 1) Elf\n 2) Orc\n";

	while (!(std::cin >> option) || (option != 1 && option != 2))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "wrong input\n";
	}

	switch (option)
	{
	case 1:
		race = Elf;
		break;
	case 2:
		race = Orc;
		break;
	}	return race;
}

//user selecting sex for slave
SexType SexSelect()
{
	int option;
	SexType sex;
	cout << "What sex do you want?\n";
	cout << " 1) Male\n 2) Female\n";

	while (!(std::cin >> option) || (option != 1 && option != 2))
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "wrong input\n";
	}

	switch (option)
	{
	case 1:
		sex = Male;
		break;
	case 2:
		sex = Female;
		break;
	}	return sex;
}

//creating fabric based on user selection
SlaveMarket* MarketSelect(const RaceType& race, const SexType& sex)
{
	if (race == RaceType::Orc && sex == SexType::Male)
		return new OrcMaleMarket();
	else if (race == RaceType::Orc && sex == SexType::Female)
		return new OrcFemaleMarket();
	else if (race == RaceType::Elf && sex == SexType::Male)
		return new ElfMaleMarket();
	else if (race == RaceType::Elf && sex == SexType::Female)
		return new ElfFemaleMarket();
}

int main()
{
	//1. Abstract factory presentation.
	RaceType race;
	SexType sex;
	
	cout << "Welcome to my slave market!\n Would you like to buy some slave?\n";

	race = RaceSelect();
	sex = SexSelect();

	SlaveMarket* sm = MarketSelect(race, sex);

	cout << "How will you name your slave?\n";
	string slaveName;
	cin.ignore();
	getline(cin, slaveName);
	Slave newSlave = Slave(slaveName, sm);
	
	cout << "Hey, slave. Do you have something to say to your new master?\n";
	newSlave.Info();
	cout << "Heh, nice choice. By the way the cost for this slave is " << newSlave.Cost() << endl << endl;
	

	//2. Observer presentation
	SlaveTracker st = SlaveTracker();
	cout << "As a gift I am also giving you this bracelet that allows to track your slave if it be on run\n";
	cout << "First lest register this track device to your slave\n";

	newSlave.RegisterTracker(&st);

	cout << "Now let's make slave running.\n";
	newSlave.Run();
	cout << endl;

	//3. Adapter presentation
	cout << "Before we had slaves and they did slave work.\n";
	newSlave.DoSlaveWork();
	cout << "But now there are workers every where and they do nonslave work.\n";
	Worker someWorker = Worker();
	someWorker.DoWork();
	cout << "Let's adapt your slave to worker.\n";
	Worker* slaveAsWorker = new SlaveAdapter(&newSlave);
	slaveAsWorker->DoWork();

	delete slaveAsWorker;
	delete sm;
	system("pause(0)");
	return 0;
}