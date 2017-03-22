#include "stdafx.h"
#include "Kinanti.h"

Kinanti::Kinanti(int year)
{
	m_year = year;
}
string Kinanti::getName()
{
	string a = "\"Kinanti (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void Kinanti::prepare()
{
	cout << "you ordered Kinanti.\n" << "so the story about this red wine started at " << m_year << ".\n All this time it waited for you to drink it in a room tempature. enjoy!" << endl;
}
int Kinanti::getYear()
{
	return m_year;
}
Kinanti::~Kinanti()
{
}
