#include <iostream>
#include "funkcje.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	float a,b;
	
	cout<<"Podaj a do obliczenia funkcji liniowej"<<endl;
	cin>>a;
	cout<<"Podaj b do obliczenia funkcji liniowej"<<endl;
	cin>>b;
	
	cout<<"Miejsce zerowe funkcji o a="<<a<<" i b="<<b<<" jest rowne "<<f_liniowa(a,b)<<endl;
	
	return 0;
}