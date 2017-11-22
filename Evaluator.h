#ifndef EVALUATOR_H_INCLUDED
#define EVALUATOR_H_INCLUDED

#include "Generator.h"

using namespace std;

class Evaluator
{
public:
	Evaluator(Generator* g,int n);
	
	float evaluate();

	
private:
	Generator* generator;
	float pi = 3.14;
	int nrGenerate;
	int nrSc;
	float rez;
};

#endif