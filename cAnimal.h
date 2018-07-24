#pragma once
#define MAX_ANIMAL 3
#include <iostream>
#include "toaDo.h"
#include "console1.h"
using namespace std;
class cAnimal :public toaDo
{
public:
	cAnimal();
	cAnimal(int, int);
	virtual void deleteChar()
	{

	}
	virtual void draw()
	{

	}
	void move();
	
};

