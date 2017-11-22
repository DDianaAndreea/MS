#include "Binomial.h"



Binomial::Binomial(int n, float p, Generator *g)
{
	nr = n;
	lP = p;
	generator = g;
}


float Binomial::generate()
{
	int x = 0;
	//cout << "limita este:" << lP<<endl;
	float u = generator->Next();

	if (u < lP)
	{
		x++;
	}

	nr--;

	float nrr = nr;
	float xx = x;
	float rez =(float) xx / nrr;

	return rez;
}
