#pragma once
#include <string>
#include <iostream>
using namespace std;
class Drink
{
public:
	virtual string getName();
	virtual void prepare() = 0;
};