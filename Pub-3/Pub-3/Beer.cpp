#include "stdafx.h"
#include "Beer.h"


Beer::Beer(string name)
{
	m_name = name;
}
string Beer::getName()
{
	return m_name;
}
void Beer::prepare()
{
	cout << "you ordered " << m_name << ".\n" << "well, all you need to do is pour it into a glass and serve. \n" << endl;
}
