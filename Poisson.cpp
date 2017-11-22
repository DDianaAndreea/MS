#include "Poisson.h"
#include <math.h>


Poisson::Poisson(int n, float lamda, Generator *g)
{
	nr = n;
	lam= lamda;
	generator = g;
	
}

float Poisson::generate()
{
	k = 0;
	p = 1;
	e = 2.71828;
	float lamda = 0 - lam;
	float le = (float) pow(e, lamda);
	float L =le;
	//cout << "L=" << L<<endl;
	do
	{
		k++;
		float u = generator->Next();
		//cout << "numarul generat:" << u<<endl;
		p = p * 4;
		
	} while (p > L && k < nr);
	
	
	float rez = (k-1)/ nr;
	return rez ;
}
