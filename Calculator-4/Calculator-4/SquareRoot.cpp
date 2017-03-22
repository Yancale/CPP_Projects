#include "stdafx.h"
#include "SquareRoot.h"
SquareRoot::SquareRoot() { }
SquareRoot::~SquareRoot() { }
bool SquareRoot::supportsOperation(string op_string)
{
	if (op_string == "sqrt" || op_string == "squareroot")
		return true;
	return false;
}
int SquareRoot::requiredParameters()
{
	return 0;
}
double SquareRoot::calcResult(double currVal, vector<string> parameters)
{
	return sqrt(currVal);
}