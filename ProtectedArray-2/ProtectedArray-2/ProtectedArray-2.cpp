#pragma once
#include "stdafx.h"
#include "ProtectedArray.h"
#include <iostream>
using namespace std;
#include "ProtectedArrayIter.h"

int main()
{
	try {
		ProtectedArray<char> * a = new ProtectedArray<char>(6);
		for (int i = 0; i < a->getSize(); i++)
			(*a)[i] = 'a' + i;
		// fill the array with a,b,c,d,e,f
		ProtectedArrayIter<char> p(a->getPtr(1), a);
		// create an iterator of ProtectedArray[1]

		cout << *(p++) << endl;//change p to point to a[2] but print a[1] (because of postfix operator)
		cout << *(++p) << endl;//change p to point to a[3] but print a[3] (because of prefix operator)
		cout << *(p++) << endl;//change p to point to a[4] but print a[3] (because of postfix operator)
		cout << *(--p) << endl;//change p to point to a[3] but print a[3] (because of prefix operator)
		cout << *(p++) << endl;//change p to point to a[4] but print a[3] (because of postfix operator)
		cout << *(p++) << endl;//change p to point to a[5] but print a[4] (because of postfix operator)
		cout << *(++p) << endl;// trow out of range, there is no a[6] in the array
		ProtectedArrayIter<char> z(a->getPtr(6), a); // this will trow out of range exception and print it, this will not occur because the last line already throwed exception

	}
	catch (out_of_range ex)
	{
		cout << ex.what() << endl;
	}
	// prints if out of range exception occurred.
	return 0;
}

