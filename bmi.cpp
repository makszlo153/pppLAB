#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;
int main()
{
	double a,b,bmi;
	cout<<"witaj w kalkulatorze swojego BMI\n\n";
	cout<<"**************************\n\n";
	cout<<"podaj swoj wzrost w centymatrach\n";
	cin>>a;
	cout<<"podaj swoja wage w kg\n";
	cin>>b;
	
	bmi=b/(pow(a/100, 2));
	cout<<"twoje bmi wynosi: "<<bmi<<endl;
	if		(bmi<18.5)		cout<<"jestes za chudy"<<endl;
	else if	(bmi>25)		cout<<"jestes za GRUBY"<<endl;
	else					cout<<"twoja waga jest poprawna"<<endl;
	
	
	return 0;
	
}
