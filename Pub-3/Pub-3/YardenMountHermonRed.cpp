#include "stdafx.h"
#include "YardenMountHermonRed.h"

YardenMountHermonRed::YardenMountHermonRed(int year)
{
	m_year = year;
}
string YardenMountHermonRed::getName()
{
	string a = "\"Yarden Mount Hermon Red (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void YardenMountHermonRed::prepare()
{
	cout << "you ordered Yarden Mount Hermon Red.\n" << "so the story about this red wine started at " << m_year << ".\n All this time it waited for you to drink it in a room tempature. enjoy!" << endl;
}
int YardenMountHermonRed::getYear()
{
	return m_year;
}
YardenMountHermonRed::~YardenMountHermonRed()
{
}
