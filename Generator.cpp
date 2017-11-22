#include "Generator.h"

int Generator::NrCifre(int n)
{
	int cifre = 0;

	while (n != 0)
	{
		n = n / 10;
		cifre++;
	}
	return cifre;
}


