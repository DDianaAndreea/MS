#include "LCG.h"

float LCG::Next()
{
	float s;

	s = (seed*a + c) % m;
	seed = s;

	return s / 100;
}

