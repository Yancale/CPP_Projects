#include "stdafx.h"
#include "Power.h"

Power::Power() { }
Power::~Power() {  }
bool Power::supportsOperation(string op_string)
{
	if (op_string == "^" || op_string == "power")
		return true;
	return false;
}
int Power::requiredParameters()
{
	return 1;
}
double Power::calcResult(double currVal, vector<string> parameters)
{
	double temp = currVal;
	int x = stoi(parameters[0]);
	for (int i = 1; i < x; i++)
		currVal *= temp;
	return currVal;
}