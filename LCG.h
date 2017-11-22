#pragma once

#ifndef LCG_H_INCLUDED
#define LCG_H_INCLUDED
#include "Generator.h"


class LCG :
	public Generator
{
public:
	LCG(int s, int multipicator, int increment, int modul) :Generator(s)
	{
		a = multipicator;
		c = increment;
		m = modul;

	}
	
	float Next();
private:
	int a, c, m;
	
};

#endif