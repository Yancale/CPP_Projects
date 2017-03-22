#pragma once
#include "RedWine.h"
class YardenKavarneSovinyon :public RedWine
{
public:
	virtual string getName();
	virtual void prepare();
	int getYear();
	YardenKavarneSovinyon(int year);
	~YardenKavarneSovinyon();
private:
	int m_year;

};


