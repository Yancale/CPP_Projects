#include "stdafx.h"
#include "YardenSaredona.h"

YardenSaredona::YardenSaredona(int year)
{
	m_year = year;
}
string YardenSaredona::getName()
{
	string a = "\"Yarden Saredona (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void YardenSaredona::prepare()
{
	cout << "you ordered Yarden Saredona.\n" << "so the story about this white wine started at " << m_year << ".\n All this time it waited for you to drink it in a cool tempature. enjoy!" << endl;
}
int YardenSaredona::getYear()
{
	return m_year;
}
YardenSaredona::~YardenSaredona()
{
}
