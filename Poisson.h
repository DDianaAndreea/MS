#pragma once

#ifndef POISSON_H_INCLUDED
#define POISSON_H_INCLUDED

#include <iostream>
#include <math.h>
#include "Generator.h"

class Poisson
{
public:
	Poisson(int n,float lamda, Generator *g);
	float generate();
	
private:
	Generator *generator;
	int  k;
	float nr;
	float lam, L, p;
	float e = 2.71828;
	
	


};

#endif