#pragma once
#include "calculatorOperation.h"
class Division :public calculatorOperation //define the division operation ->takes one parameter,  key words : "/" and "divide".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	Division();
	~Division();
};

