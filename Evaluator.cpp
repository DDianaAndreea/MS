#pragma once 
#include "Evaluator.h"

using namespace std;

Evaluator::Evaluator(Generator *g, int n)
{
	generator = g;
	nrGenerate = n;
}

float Evaluator::evaluate()
{
	nrSc = 0;
	for (int i = 0; i < nrGenerate; i++)
	{
		float x = generator->Next();
		float y = generator->Next();
		

		if ((x*x + y*y) <= 1)
		{
			nrSc++;
		}
	}
	cout << endl << "Numere in semicerc:" << nrSc<<endl;

	float a1 = 4 * nrSc;
	float a2 = a1 / nrGenerate;
	 rez = pi - a2;
	 

	return fabs(rez);

}
