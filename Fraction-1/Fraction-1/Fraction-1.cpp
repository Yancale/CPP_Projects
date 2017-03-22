// Fraction-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Fraction.h"
#include <iostream>
using namespace std;
Fraction operator* (int num, const Fraction &frac) //newFrac =i*Frac
{
	Fraction temp = Fraction(frac.getNominator() * num, frac.getDenominator());
	temp.reduction();
	return temp;
}
Fraction operator/ (int num, const Fraction &frac) //newFrac =i/Frac
{
	Fraction temp = Fraction(frac.getDenominator()*num, frac.getNominator());
	temp.reduction();
	return temp;
}
Fraction operator+ (int num, const Fraction &frac) //newFrac =i+Frac
{
	Fraction temp = Fraction(frac.getNominator() + num*frac.getDenominator(), frac.getDenominator());
	temp.reduction();
	return temp;
}
Fraction operator- (int num, const Fraction &frac) //newFrac =i-Frac
{
	Fraction temp = Fraction(num*frac.getDenominator() - frac.getNominator(), frac.getDenominator());
	temp.reduction();
	return temp;
}
void operator*= (float &num, Fraction &frac) //i *= Frac
{
	Fraction temp = Fraction(frac.getNominator() *(int)num, frac.getDenominator());
	temp.reduction();
	float f = temp.toFloat();
	num = f;
}
void operator/= (float &num, Fraction &frac) // i/=Frac
{
	Fraction temp = Fraction(frac.getDenominator() * (int)num, frac.getNominator());
	temp.reduction();
	float f = temp.toFloat();
	num = f;
}
void operator+= (float &num, Fraction &frac) // i+=Frac
{
	Fraction temp = Fraction(frac.getNominator() + (int)num*frac.getDenominator(), frac.getDenominator());
	temp.reduction();
	float f = temp.toFloat();
	num = f;
}
void operator-= (float &num, Fraction &frac) // i-=Frac
{
	Fraction temp = Fraction((int)num*frac.getDenominator() - frac.getNominator(), frac.getDenominator());
	temp.reduction();
	float f = temp.toFloat();
	num = f;

}

int main()
{
	Fraction a = Fraction(3, 4);
	Fraction b = Fraction(2, 3);
	cout << "first fraction is: " << endl;
	a.printFrac();
	cout << "second fraction is: " << endl;
	b.printFrac();
	cout << "+ operation:" << endl;
	(a + b).printFrac();
	cout << "- operation:" << endl;
	(a - b).printFrac();
	cout << "* operation:" << endl;
	(a * b).printFrac();
	cout << "/ operation:" << endl;
	(a / b).printFrac();
	Fraction c(1, 3);
	c += b;
	cout << "(1/3)+=second fraction: " << endl;
	c.printFrac();
	c /= a;
	cout << "last opertaion sum /=first fraction fraction: " << endl;
	c.printFrac();
	float f = 2; // works as int but its type is float (i had a problem with converting int to float while using the int reference inside a function.
	f *= c;
	cout << "1.5*=lsat operation output is: " <<f<< endl;

    return 0;
}

