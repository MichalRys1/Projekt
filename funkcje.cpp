#include <iostream>
#include <cmath>

using namespace std;

float delta , x1, x2 ,tmp1,tmp2,tmp3;


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

void f_kwadratowa(float a,float b,float c)
{
	if(a==0)
	{
		cout<<"Funkcja ta jest funkcja liniowa"<<endl;
		cout<<f_liniowa(b,c)<<endl;
	}
	else
	{
		delta=(b*b)-4*a*c;
	
		if(delta<0)
		{
			cout<<"Funkcja ta nie ma miejsc zerowych"<<endl;
		}
		else if(delta==0)
		{
			cout<<"Funkcja ta ma jedno miejsce zerowe i wynosi ono: "<<-b/2*a<<endl;
		}
		else
		{
			x1=(-b-sqrt(delta))/2*a;
			x2=(-b+sqrt(delta))/2*a;
			cout<<"Funkcja ta ma dwa miejsca zerowe i wynosza one x1="<<x1<<" x2="<<x2<<endl;
		}
	}
}

void f_kwadratowa2(float a,float b,float c)
{
	tmp1=a;
	tmp2=-2*a*b;
	tmp3=(a*(b*b)+c);
	
	f_kwadratowa(tmp1,tmp2,tmp3);
}