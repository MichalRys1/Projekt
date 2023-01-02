#include <iostream>
#include "funkcje.hpp"
using namespace std;

float f_liniowa(float a, float b)
{
	if(a==0)
	{
		cout<<"Funkcja ta nie ma miejsca zerowego"<<endl;
	}
	else
	{
		if(-b/a==0)
		{
			return 0;
		}
		else
		{
			return -b/a;
		}
	}
}