#pragma once
#include "calculatorOperation.h"
class addition : public calculatorOperation //define the addition operation ->takes one parameter,  key words : "-" and "subtract".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	addition();
	~addition();
};


