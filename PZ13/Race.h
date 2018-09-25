#pragma once

//base class for representing slave race attribute
class Race
{
	int _cost;
protected:
	Race(int cost);
public:
	~Race();
	virtual void Info() = 0;
	int Cost() const { return _cost; }
};

