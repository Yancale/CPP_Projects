#include "stdafx.h"
#include "GolanSmadar.h"

GolanSmadar::GolanSmadar(int year)
{
	m_year = year;
}
string GolanSmadar::getName()
{
	string a = "\"Golan Smadar (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void GolanSmadar::prepare()
{
	cout << "you ordered Golan Smadar.\n" << "so the story about this white wine started at " << m_year << ".\n All this time it waited for you to drink it in a cool tempature. enjoy!" << endl;
}
int GolanSmadar::getYear()
{
	return m_year;
}
GolanSmadar::~GolanSmadar()
{
}
