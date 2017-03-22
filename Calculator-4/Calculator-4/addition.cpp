#include "stdafx.h"
#include "addition.h"

addition::addition() {  }
addition::~addition() {  }
bool addition::supportsOperation(string op_string)
{
	if (op_string == "+" || op_string == "add")
		return true;
	return false;
}
int addition::requiredParameters()
{
	return 1;
}
double addition::calcResult(double currVal, vector<string> parameters)
{
	for (int i = 0; i < this->requiredParameters(); i++)
		currVal += stoi(parameters[i]);
	return currVal;
}