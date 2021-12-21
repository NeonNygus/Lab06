#include <iostream>
#include "funkcje.h"

using namespace std;

//zadanie 1

float pole_kola(float promien_kola)
{
	return  3.14 * (promien_kola * promien_kola);
}

float pole_prostokata(float bok_prostokata_a, float bok_prostokata_b)
{
	return  bok_prostokata_a * bok_prostokata_b;
}

float pole_trojkata(float podstawa_trojkata, float wysokosc_trojkata)
{
	return (podstawa_trojkata * wysokosc_trojkata) / 2;
}

float objetosc_szescianu(float szescian_a, float szescian_b, float szescian_c)
{
	return szescian_a * szescian_b * szescian_c;
}

float objetosc_walca(float walec_promien, float walec_wysokosc)
{
	return 3.14 * (walec_promien * walec_promien) * walec_wysokosc;
}

//zadanie 2

bool SprawdzanieLiczbyPierwszej(int liczba)
{
	int i=2;
	for (i = 2; i < liczba; i++)
	{
		if (liczba % i == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

//zadanie 3

void dec_to_bin(int dec)
{

	int binarna[32];


	int i = 0;
	while (dec > 0) {
		binarna[i] = dec % 2;
		dec = dec / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << binarna[j];
}

//zadanie 4
long long dwusilnia(unsigned int n)
{
	long long dwusiln = 1; 

	for (; n > 1; n -= 2)
		dwusiln *= n;

	return dwusiln;
}