#pragma once
#include "calculatorOperation.h"
class Set :public calculatorOperation // define the set operation->takes 1 parameter,  key words: "=" and "set".
{
public:
	virtual bool supportsOperation(string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, vector<string> parameters);
	Set();
	~Set();
};

