#pragma once
#include "calculatorOperation.h"
class DoSomething :public calculatorOperation // test -> takes 3 parameters and do for each one : currVal= currVal*paramter+parameter, key words: "?" and "dosomething".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	DoSomething();
	~DoSomething();
};

