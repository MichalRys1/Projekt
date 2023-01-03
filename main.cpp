#include <iostream>
#include "funkcje.cpp"

using namespace std;

int main(int argc, char** argv) {
	
	float a,b,e;
	
	int c,d;
	
	cout<<"Witaj w programie do liczenia miejsc zerowych funkcji liniowych i kwadratowych"<<endl;
	cout<<"Wybierz typ funkcji do obliczenia"<<endl;
	cout<<"1 - Funkcja liniowa"<<endl;
	cout<<"2 - Funkcja kwadratowa"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:
			cout<<"Funkcja liniowa"<<endl;
			cout<<"Wybierz postac funkcji liniowej"<<endl;
			cout<<"1 - y=ax+b"<<endl;
			cout<<"2 - Ax+By+C=0"<<endl;
			cin>>d;
			switch(d)
			{
				case 1:
					cout<<"Podaj a do obliczenia funkcji liniowej"<<endl;
					cin>>a;
					cout<<"Podaj b do obliczenia funkcji liniowej"<<endl;
					cin>>b;
					
						if(a==0)
						{
							cout<<f_liniowa(a,b)<<endl;
						}
						else
						{
							cout<<"Miejsce zerowe funkcji o a="<<a<<" i b="<<b<<" jest rowne "<<f_liniowa(a,b)<<endl;
						}
					break;
				case 2:
					cout<<"Podaj a do obliczenia funkcji liniowej"<<endl;
					cin>>a;
					cout<<"Podaj b do obliczenia funkcji liniowej"<<endl;
					cin>>b;
					cout<<"Podaj c do obliczenia funkcji liniowej"<<endl;
					cin>>e;
					
						if(a==0)
						{
							cout<<f_liniowa2(a,b,e)<<endl;
						}
						else
						{
							cout<<"Miejsce zerowe funkcji o a="<<a<<" b="<<b<<" i c="<<e<<" jest rowne "<<f_liniowa2(a,b,e)<<endl;
						}
					
			}
			break;
		case 2:
			cout<<"Funkcja kwadratowa"<<endl;
			cout<<"Wybierz postac funkcji kwadratowej"<<endl;
			cout<<"1 - Ax^2+Bx+C=Y"<<endl;
			cout<<"2 - Y=a(x-p)^2+q"<<endl;
			cin>>d;
			switch(d)
			{
				case 1:
					cout<<"Podaj a do obliczenia funkcji kwadratowej"<<endl;
					cin>>a;
					cout<<"Podaj b do obliczenia funkcji kwadratowej"<<endl;
					cin>>b;
					cout<<"Podaj c do obliczenia funkcji kwadratowej"<<endl;
					cin>>e;
					f_kwadratowa(a,b,e);
					break;
				case 2:
					cout<<"Podaj a do obliczenia funkcji kwadratowej"<<endl;
					cin>>a;
					cout<<"Podaj p do obliczenia funkcji kwadratowej"<<endl;
					cin>>b;
					cout<<"Podaj q do obliczenia funkcji kwadratowej"<<endl;
					cin>>e;
					f_kwadratowa2(a,b,e);
			}
		break;
	}
	
	return 0;
}