#pragma once
#include <string>
#include "Race.h"
#include "Sex.h"
#include "SlaveMarket.h"
#include "ITrackable.h"
#include "ITracker.h"

//slave class, based on factory that was used for creating it has different attributes
class Slave : public ITrackable
{
private:
	std::string _name;
	Race* _race;
	Sex* _sex;
	int _cost;
	ITracker* _slaveTracker;
public:
	Slave(std::string name, SlaveMarket* _market);
	virtual ~Slave();
	void Info();
	int Cost() const;
	std::string Name() const;
	virtual void RegisterTracker(ITracker* sv) override;
	virtual void NotifyTracker() override;
	void Run();
	void DoSlaveWork();
};

