#include <iostream>
#include "funkcje.hpp"
using namespace std;

float f_liniowa(float a, float b)
{
	if(a==0)
	{
		if(b==0)
		{
			cout<<"Ta funkcja ma nieskonczenie wiele miejsc zerowych"<<endl;
		}
		else
		{
			cout<<"Ta funkcja nie ma miejsc zerowych"<<endl;
		}
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