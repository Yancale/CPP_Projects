#pragma once
#include "calculatorOperation.h"
class Power :public calculatorOperation // define the power operation-> takes 1 parameter , key words: "^" and "power".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	Power();
	~Power();
};
