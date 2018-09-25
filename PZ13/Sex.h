#pragma once

//base class for representing slave sex attribute
class Sex
{
	int _cost;
protected:
	Sex(int cost);
public:
	~Sex();
	virtual void Info() = 0;
	int Cost() const { return _cost; }
};

