#include "MidSq.h"
#include "LCG.h"
#include"Generator.h"
#include"Evaluator.h"
#include"Binomial.h"
#include"Poisson.h"
#include<iostream>
using namespace std;


int main()
{
	
	float numar;
	
	MidSq midsq1(9584);
	MidSq midsq2(3333);

	/*
	cout << "Metoda Middle Squar" << endl;
	numar = midsq.Next();
	cout << numar << endl;
	numar = midsq.Next();
	cout << numar << endl;
	numar = midsq.Next();
	cout << numar << endl;
	*/
	/*
	LCG lcg(27, 16, 38, 100);
	cout << endl << "Metoda LCG" << endl;
	numar = lcg.Next();
	cout << numar << endl;
	numar = lcg.Next();
	cout <<numar << endl;
	numar = lcg.Next();
	cout << numar << endl;
	*/
	
	/*
	Evaluator evaluatormidsq(&midsq, 10000);
	cout  <<"eroarea cu midsq:"<< evaluatormidsq.evaluate() << endl;

	Evaluator evaluatorlcg(&lcg, 10000);
	cout  << "eroarea cu lcg:" << evaluatorlcg.evaluate() << endl;
	*/
	int int1 = 0, int2 = 0, int3 = 0, int4 = 0, int5 = 0, int6 = 0, int7 = 0, int8 = 0, int9 = 0, int10 = 0;
	int nr=100;
	Binomial bin(100, 1, &midsq1);

	for (int i = 0; i < nr; i++)
	{
		float u= bin.generate();
		
		if (u > 0 && u < 0.1) {
			int1++;
		}
		else if (u > 0.1&&u < 0.2)
		{
			int2++;
		}
		else if (u > 0.2&&u < 0.3)
		{
			int3++;
		}
		else if (u > 0.3&&u < 0.4)
		{
			int4++;
		}
		else if (u > 0.4&&u < 0.5)
		{
			int5++;
		}
		else if (u > 0.5&& u < 0.6)
		{
			int6++;
		}
		else if (u > 0.6&&u < 0.7)
		{
			int7++;
		}
		else if (u > 0.7&&u < 0.8)
		{
			int8++;
		}
		else if (u > 0.8&& u < 0.9)
		{
			int9++;
		}
		else {
			int10++;
		}

	}

	std::cout << " Binomial" << endl;
	std::cout << "numere in intervalul 0-0.1 : " << int1 << endl;
	std::cout << "numere in intervalul 0.1-0.2 : " << int2 << endl;
	std::cout << "numere in intervalul 0.2-0.3 : " << int3 << endl;
	std::cout << "numere in intervalul 0.3-0.4 : " << int4 << endl;
	std::cout << "numere in intervalul 0.4-0.5 : " << int5 << endl;
	std::cout << "numere in intervalul 0.5-0.6 : " << int6 << endl;
	std::cout << "numere in intervalul 0.6-0.7 : " << int7 << endl;
	std::cout << "numere in intervalul 0.7-0.8 : " << int8 << endl;
	std::cout << "numere in intervalul 0.8-0.9 : " << int9 << endl;
	std::cout << "numere in intervalul 0.9- 1 : " << int10 << endl;

	int1 = 0, int2 = 0, int3 = 0, int4 = 0, int5 = 0, int6 = 0, int7 = 0, int8 = 0, int9 = 0, int10 = 0;
	
	Poisson poiss(100, 1000, &midsq2);

	for (int i = 0; i < nr; i++)
	{
		float u = poiss.generate();

		if (u > 0 && u < 0.1) {
			int1++;
		}
		else if (u > 0.1&&u < 0.2)
		{
			int2++;
		}
		else if (u > 0.2&&u < 0.3)
		{
			int3++;
		}
		else if (u > 0.3&&u < 0.4)
		{
			int4++;
		}
		else if (u > 0.4&&u < 0.5)
		{
			int5++;
		}
		else if (u > 0.5&& u < 0.6)
		{
			int6++;
		}
		else if (u > 0.6&&u < 0.7)
		{
			int7++;
		}
		else if (u > 0.7&&u < 0.8)
		{
			int8++;
		}
		else if (u > 0.8&& u < 0.9)
		{
			int9++;
		}
		else {
			int10++;
		}

	}

	std::cout << " Poisson" << endl;
	std::cout << "numere in intervalul 0-0.1 : " << int1 << endl;
	std::cout << "numere in intervalul 0.1-0.2 : " << int2 << endl;
	std::cout << "numere in intervalul 0.2-0.3 : " << int3 << endl;
	std::cout << "numere in intervalul 0.3-0.4 : " << int4 << endl;
	std::cout << "numere in intervalul 0.4-0.5 : " << int5 << endl;
	std::cout << "numere in intervalul 0.5-0.6 : " << int6 << endl;
	std::cout << "numere in intervalul 0.6-0.7 : " << int7 << endl;
	std::cout << "numere in intervalul 0.7-0.8 : " << int8 << endl;
	std::cout << "numere in intervalul 0.8-0.9 : " << int9 << endl;
	std::cout << "numere in intervalul 0.9- 1 : " << int10 << endl;
	
	return 0;


}