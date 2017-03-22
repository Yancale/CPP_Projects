#pragma once
#include "calculatorOperation.h"
class subtraction :public calculatorOperation //define the subtraction operation ->takes one parameter,  key words : "-" and "subtract".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	subtraction();
	~subtraction();
};

