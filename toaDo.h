#pragma once
#include "console1.h"
#include <vector>
#include <iostream>
using namespace std;
class toaDo
{
protected:
	int m_x;
	int m_y;
public:
	toaDo()
	{
		m_x = 0;
		m_y = 0;
	}
	toaDo(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	void set(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	int& getX()
	{
		return m_x;
	}
	int& getY()
	{
		return m_y;
	}
};

