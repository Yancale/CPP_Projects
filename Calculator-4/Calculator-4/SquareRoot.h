#pragma once
#include "calculatorOperation.h"
class SquareRoot :public calculatorOperation //define the  square root operation->takes no parameters,  key words : "sqrt" and "squareroot".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	SquareRoot();
	~SquareRoot();
};
