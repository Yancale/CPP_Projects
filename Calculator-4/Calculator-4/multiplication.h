#pragma once
#include "calculatorOperation.h"
class multiplication :public calculatorOperation //define multipication ->takes one parameter,  key words : "*" and "multiply".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	multiplication();
	~multiplication();
};

