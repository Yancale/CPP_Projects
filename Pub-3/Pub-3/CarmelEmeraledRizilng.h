#pragma once
#include "WhiteWine.h"
class CarmelEmeraledRizilng :public WhiteWine
{
public:
	virtual string getName();
	virtual void prepare();
	int getYear();
	CarmelEmeraledRizilng(int year);
	~CarmelEmeraledRizilng();
private:
	int m_year;

};

