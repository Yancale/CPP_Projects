#pragma once
#include "Wine.h"
class WhiteWine :public Wine
{
public:
	virtual string getName();
	virtual void prepare() = 0;

};

