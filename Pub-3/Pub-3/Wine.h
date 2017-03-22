#pragma once
#include "Drink.h"
class Wine :public Drink
{
public:
	virtual string getName();
	virtual void prepare() = 0;
};

