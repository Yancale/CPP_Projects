#include "stdafx.h"
#include <iostream>
#include "Fraction.h"

using namespace std;

void Fraction::setDenominator(int num)
{
	m_denominator = num;
}
void Fraction::setNominator(int num)
{
	m_nominator = num;
}
void Fraction::reduction() // this method check if the multipication is greater than 0, and accordingly check if the denominator and nominator %==0 for all the numbers between the multipication and 2. if so, it divide them by these numbers (or their negaited values if the multipication less than 0).
{
	if (m_denominator*m_nominator > 0) {
		for (int i = m_denominator*m_nominator; i > 1; i--)
		{
			if ((m_denominator% i == 0) && (m_nominator % i == 0))
			{
				m_denominator /= i;
				m_nominator /= i;
			}
		}
	}
	else
	{
		for (int i = m_denominator*m_nominator; i < -1; i++)
		{
			if ((m_denominator% i == 0) && (m_nominator % i == 0))
			{
				m_denominator /= -i;
				m_nominator /= -i;
			}
		}
	}
}
void Fraction::printFrac() // print the Fraction
{
	cout << m_nominator << "\n---\n" << m_denominator << endl;
}
float Fraction::toFloat()const // convert Fraction to float
{
	return ((float)m_nominator / (float)m_denominator);
}
Fraction Fraction::operator* (const Fraction &other) const //  newFrac=Frac1*Frac2
{
	Fraction temp = Fraction(m_nominator * other.getNominator(), m_denominator *other.getDenominator());
	temp.reduction();
	return temp;
}
Fraction Fraction::operator* (int num) const  //newFrac = Frac*i
{
	Fraction temp = Fraction(m_nominator * num, m_denominator);
	temp.reduction();
	return temp;
}
Fraction Fraction::operator/ (const Fraction &other) const //newFrac = Frac1/Frac2
{
	Fraction temp = Fraction(m_nominator * other.getDenominator(), m_denominator *other.getNominator());
	temp.reduction();
	return temp;
}
Fraction Fraction::operator/ (int num) const //newFrac = Frac/i
{
	Fraction temp = Fraction(m_nominator, m_denominator*num);
	temp.reduction();
	return temp;
}
Fraction Fraction::operator+ (const Fraction &other) const  //  newFrac=Frac1+Frac2
{
	Fraction temp = Fraction(m_nominator*other.getDenominator() + (other.getNominator()*m_denominator), m_denominator *other.getDenominator());
	temp.reduction();
	return temp;
}
Fraction Fraction::operator+ (int num) const //newFrac = Frac+i
{
	Fraction temp = Fraction(m_nominator + num*m_denominator, m_denominator);
	temp.reduction();
	return temp;
}
Fraction Fraction::operator- (const Fraction &other) const //newFrac = Frac1 - Frac2
{
	Fraction temp = Fraction(m_nominator*other.getDenominator() - (other.getNominator()*m_denominator), m_denominator *other.getDenominator());
	temp.reduction();
	return temp;
}
Fraction Fraction::operator- (int num) const //newFrac = Frac-i
{
	Fraction temp = Fraction(m_nominator - num*m_denominator, m_denominator);
	temp.reduction();
	return temp;
}
void Fraction::operator- ()  //Frac= -Frac
{
	this->setNominator(-m_nominator);
}
void Fraction::operator*= (Fraction &other) //Frac1 *= Frac2
{
	this->setNominator(other.getNominator()*m_nominator);
	this->setDenominator(other.getDenominator()*m_denominator);
	this->reduction();
}
void Fraction::operator*= (int num) //Frac *= i
{
	this->setNominator(num*m_nominator);
	this->reduction();
}
void Fraction::operator/= (Fraction &other) //Frac1/=Frac2
{
	this->setNominator(other.getDenominator()*m_nominator);
	this->setDenominator(other.getNominator()*m_denominator);
	this->reduction();
}
void Fraction::operator/= (int num) //Frac/=i
{
	this->setDenominator(num*m_denominator);
	this->reduction();
}
void Fraction::operator+= (Fraction &other) // Frac1+=Frac2
{
	this->setNominator(m_nominator*other.getDenominator() + other.getNominator()*m_denominator);
	this->setDenominator(other.getDenominator()*m_denominator);
	this->reduction();
}
void Fraction::operator+= (int num) // Frac+=i
{
	this->setNominator(m_nominator + num*m_denominator);
	this->reduction();
}
void Fraction::operator-= (Fraction &other) // Frac1-=Frac2
{
	this->setNominator(m_nominator*other.getDenominator() - other.getNominator()*m_denominator);
	this->setDenominator(other.getDenominator()*m_denominator);
	this->reduction();
}
void Fraction::operator-= (int num) // Frac1-=num
{
	this->setNominator(m_nominator - num*m_denominator);
	this->reduction();
}
int Fraction::getNominator() const
{
	return m_nominator;
}
int Fraction::getDenominator() const
{
	return m_denominator;

}

Fraction::~Fraction()
{
}
Fraction::Fraction(int nominator, int denominator)
{
	m_denominator = denominator;
	m_nominator = nominator;
}