#pragma once
#include "Sex.h"

//class for female sex attribute
class Female :
	public Sex
{
public:
	Female();
	~Female();

	virtual void Info() override;

};

