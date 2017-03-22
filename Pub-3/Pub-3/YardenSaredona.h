#pragma once
#include "WhiteWine.h"
class YardenSaredona :public WhiteWine
{
public:
	virtual string getName();
	virtual void prepare();
	int getYear();
	YardenSaredona(int year);
	~YardenSaredona();
private:
	int m_year;

};
	

