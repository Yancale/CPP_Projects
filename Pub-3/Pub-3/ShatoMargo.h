#pragma once
#include "RedWine.h"
class ShatoMargo :public RedWine
{
public:
	virtual string getName();
	virtual void prepare();
	int getYear();
	ShatoMargo(int year);
	~ShatoMargo();
private:
	int m_year;
};

