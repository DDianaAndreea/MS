#pragma once

#ifndef GENERATOR_H_INCLUDED
#define GENERATOR_H_INCLUDED

#include<iostream>
#include<list>
#include<algorithm>

using namespace std;

class Generator
{
public:
	Generator(){}
	Generator(int s)
	{
		seed = s;
		nrCifreSeed = NrCifre(seed);
		
	}

	int seed;
	int nrCifreSeed;
	virtual float Next() { return 0; };
	int NrCifre(int);
	list<float>valori;



};

#endif