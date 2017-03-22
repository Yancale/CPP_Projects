#include "stdafx.h"
#include "Division.h"

Division::Division() { }
Division::~Division() {  }
bool Division::supportsOperation(string op_string)
{
	if (op_string == "/" || op_string == "divide")
		return true;
	return false;
}
int Division::requiredParameters()
{
	return 1;
}
double Division::calcResult(double currVal, vector<string> parameters)
{
	for (int i = 0; i < this->requiredParameters(); i++)
		currVal /= stoi(parameters[i]);
	return currVal;
}