#pragma once
#include "RedWine.h"
class Kinanti :public RedWine
{
public:
	virtual string getName();
	virtual void prepare();
	int getYear();
	~Kinanti();
	Kinanti(int year);
private:
	int m_year;
};

