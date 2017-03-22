#pragma once
#include "RedWine.h"
class YardenMountHermonRed :public RedWine
{
public:
	virtual string getName();
	virtual void prepare();
	int getYear();
	YardenMountHermonRed(int year);
	~YardenMountHermonRed();
private:
	int m_year;

};


