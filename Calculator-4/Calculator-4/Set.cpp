#include "stdafx.h"
#include "Set.h"

Set::Set() {  }
Set::~Set() {  }
bool Set::supportsOperation(string op_string)
{
	if (op_string == "set" || op_string == "=")
		return true;
	return false;
}
int Set::requiredParameters()
{
	return 1;
}
double Set::calcResult(double currVal, vector<string> parameters)
{

	return stod(parameters[0]);

}
