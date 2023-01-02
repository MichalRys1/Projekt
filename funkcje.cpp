#include <iostream>
#include "funkcje.hpp"
using namespace std;

float f_liniowa(float a, float b)
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