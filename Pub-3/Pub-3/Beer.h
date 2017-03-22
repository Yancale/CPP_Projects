#pragma once
#include "Drink.h"
class Beer :public Drink
{
public:
	virtual string getName();
	virtual void prepare();
	Beer(string name);
private:
	string m_name;
};


