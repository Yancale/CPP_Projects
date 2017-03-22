
#include "stdafx.h"
#include "addition.h"
#include "Division.h"
#include "DoSomething.h"
#include "multiplication.h"
#include "Power.h"
#include "Set.h"
#include "SquareRoot.h"
#include "subtraction.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
vector<calculatorOperation*> createContainer()// add all the oprations to a vector of pointers of their base class.
{
	vector<calculatorOperation*> calc;
	calc.push_back(new addition());
	calc.push_back(new subtraction());
	calc.push_back(new multiplication());
	calc.push_back(new Division());
	calc.push_back(new SquareRoot());
	calc.push_back(new Power());
	calc.push_back(new Set());
	calc.push_back(new DoSomething());
	return calc;
}
vector<string> split(string s) 
{
	vector<string> a;
	vector<string> r;
	istringstream iss(s);
	do
	{
		string sub;
		iss >> sub;
		a.push_back(sub);
	} while (iss);
	a.pop_back();
	for (int i = 1; i <(int)a.size(); i++)
		r.push_back(a[i]);
	return r;
}
// i wanted to be able to insert any given new operation to my calculator so i add a function that split the user command by spaces and delete the first one(the operation itself) so this function will return all the parameters no matter how many there are

int main()
{
	vector<calculatorOperation*> calc = createContainer();
	double currVal = 0;
	cout << "Welcome to modular calculator." << endl;
	string userOp = "";
	getline(cin, userOp); //get a line from the user, continue until user type stop
	while (userOp != "stop")
	{
		vector<string> para = split(userOp);
		for (int i = 0; i < (int)calc.size(); i++)
			if (calc[i]->supportsOperation(userOp.substr(0, userOp.find(" "))))
			{
				if (calc[i]->requiredParameters() == (para.size()))
					currVal = calc[i]->calcResult(currVal, para);
			}
		// check if the user's command matches one of the operations by name and number of parameters, if so use this operation with the vector of parameters.
		cout << "current value is: " << currVal << endl;
		getline(cin, userOp);
	}
	return 0;
}
