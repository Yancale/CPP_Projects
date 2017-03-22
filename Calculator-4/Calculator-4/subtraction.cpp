#include "stdafx.h"
#include "subtraction.h"

subtraction::subtraction() {  }
subtraction ::~subtraction() {  }
bool subtraction::supportsOperation(string op_string)
{
	if (op_string == "-" || op_string == "subtract")
		return true;
	return false;
}
int subtraction::requiredParameters()
{
	return 1;
}
double subtraction::calcResult(double currVal, vector<string> parameters)
{
	for (int i = 0; i < this->requiredParameters(); i++)
		currVal -= stoi(parameters[i]);
	return currVal;
}
