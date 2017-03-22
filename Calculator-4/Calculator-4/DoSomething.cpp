#include "stdafx.h"
#include "DoSomething.h"

DoSomething::DoSomething() { }
DoSomething::~DoSomething() {  }
bool DoSomething::supportsOperation(string op_string)
{
	if (op_string == "DoSomething" || op_string == "?")
		return true;
	return false;
}
int DoSomething::requiredParameters()
{
	return 3;
}
double DoSomething::calcResult(double currVal, vector<string> parameters)
{
	for (int i = 0; i < (int)parameters.size(); i++)
		currVal = currVal * stod(parameters[i]) + stod(parameters[i]);
	return currVal;
}
