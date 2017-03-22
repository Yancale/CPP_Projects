#pragma once
#include <string>
#include <vector>
using namespace std;
class calculatorOperation // abstract class to operations. has 3 pure virtual functions.
{
public:
	virtual bool supportsOperation(string op_string) = 0;
	virtual int requiredParameters() = 0;
	virtual double calcResult(double currVal, vector<string> parameters) = 0;
};

