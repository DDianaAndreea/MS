#pragma once
#ifndef BINOMIAL_H_INCLUDED
#define BINOMIAL_H_INCLUDED

#include <iostream>
#include <math.h>
#include "Generator.h"

class Binomial
{
public:
	Binomial(int n, float p, Generator *g);
	float generate();
private:
	int i, nr;
	float lP;
	Generator *generator;
	
};

#endif