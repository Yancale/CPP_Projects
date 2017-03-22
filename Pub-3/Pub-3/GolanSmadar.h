#pragma once
#include "WhiteWine.h"
class GolanSmadar :public WhiteWine
{
public:
	virtual string getName();
	virtual void prepare();
	GolanSmadar(int year);
	~GolanSmadar();
	int getYear();
private:
	int m_year;

};

