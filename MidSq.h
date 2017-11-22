#pragma once

#ifndef MIDSQ_H_INCLUDED
#define MIDSQ_H_INCLUDED

#include <iostream>
#include <math.h>
#include "Generator.h"

using namespace std;

class MidSq :
	public Generator
{
public:
	float Next();
	MidSq(int s) :Generator(s) {};
	


};

#endif
