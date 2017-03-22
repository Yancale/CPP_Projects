#include "stdafx.h"
#include "CarmelEmeraledRizilng.h"

CarmelEmeraledRizilng::CarmelEmeraledRizilng(int year)
{
	m_year = year;
}
string CarmelEmeraledRizilng::getName()
{
	string a = "\"Carmel Emeraled Rizilng (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void CarmelEmeraledRizilng::prepare()
{
	cout << "you ordered Carmel Emeraled Rizilng.\n" << "so the story about this white wine started at " << m_year << ".\n All this time it waited for you to drink it in a cool tempature. enjoy!" << endl;
}
int CarmelEmeraledRizilng::getYear()
{
	return m_year;
}
CarmelEmeraledRizilng::~CarmelEmeraledRizilng()
{
}
