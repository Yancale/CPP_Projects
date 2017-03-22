#include "stdafx.h"
#include "YardenKavarneSovinyon.h"

YardenKavarneSovinyon::YardenKavarneSovinyon(int year)
{
	m_year = year;
}
string YardenKavarneSovinyon::getName()
{
	string a = "\"Yarden Kavarne Sovinyon (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void YardenKavarneSovinyon::prepare()
{
	cout << "you ordered Yarden Kavarne Sovinyon.\n" << "so the story about this red wine started at " << m_year << ".\n All this time it waited for you to drink it in a room tempature. enjoy!" << endl;
}
int YardenKavarneSovinyon::getYear()
{
	return m_year;
}
YardenKavarneSovinyon::~YardenKavarneSovinyon()
{
}
