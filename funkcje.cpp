#include <iostream>

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

float f_liniowa2(float a, float b,float c)
{
	
	if(b!=0)
	{
		a=a/-b;
		c=c/-b;
		
		if(a==0)
		{
			if(c==0)
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
			if(-c/a==0)
			{
				return 0;
			}
			else
			{
				return -c/a;
			}	
		}
	}
	else
	{
		return -c/a;
	}
}