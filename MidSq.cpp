#include "MidSq.h"

float MidSq::Next()
{
	

	int nrGenerat = (seed*seed / (int)pow(10, nrCifreSeed / 2)) % (int)pow(10, nrCifreSeed);
	
	if (valori.size() == 10)
	{
		valori.pop_front();
	}
	list<float>::iterator it = find(valori.begin(), valori.end(), nrGenerat);
	if (it != valori.end())
	{
		nrGenerat += 37;
	}
	valori.push_back(nrGenerat);
	seed = nrGenerat;

	if (NrCifre(nrGenerat) < nrCifreSeed)
	{
		nrGenerat = nrGenerat + pow(10, nrCifreSeed);
		seed = nrGenerat;
	}
	

	return nrGenerat / pow(10, nrCifreSeed);
}


