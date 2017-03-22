#include "stdafx.h"
#include "multiplication.h"

multiplication::multiplication() {  }
multiplication ::~multiplication() { }
bool multiplication::supportsOperation(string op_string)
{
	if (op_string == "*" || op_string == "multiply")
		return true;
	return false;
}
int multiplication::requiredParameters()
{
	return 1;
}
double multiplication::calcResult(double currVal, vector<string> parameters) 
{
	for (int i = 0; i < this->requiredParameters(); i++)
		currVal *= stoi(parameters[i]);
	return currVal;
}
