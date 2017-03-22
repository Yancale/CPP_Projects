#include "stdafx.h"
#include "ShatoMargo.h"

ShatoMargo::ShatoMargo(int year)
{
	m_year = year;
}
string ShatoMargo::getName()
{
	string a = "\"Shato Margo (year ";
	a += to_string(m_year);
	a += ")\"";
	return a;
}
void ShatoMargo::prepare()
{
	cout << "you ordered Shato Margo.\n" << "so the story about this red wine started at " << m_year << ".\n All this time it waited for you to drink it in a room tempature. enjoy!" << endl;
}
int ShatoMargo::getYear()
{
	return m_year;
}
ShatoMargo::~ShatoMargo()
{
}
