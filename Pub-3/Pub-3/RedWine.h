#pragma once
#include "Wine.h"
class RedWine :public Wine
{
public:
	virtual string getName();
	virtual void prepare() = 0;
};
