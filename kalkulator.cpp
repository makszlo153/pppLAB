#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"WITAJ W KALKULATORZE CWELU\nWYBIEZ CYFRE W ZALEZNOSCI JAKIE DZIALANIE CHCESZ WYKONAC\n1.dodawanie\n2.odejmowanie";
	char znak;
	znak=getch();
	cout<<"\n";
	cout<<"wprowadz dwie liczby\n";
	cin>>a>>b;
	if(znak=='1')
	
	{
		cout<<"rol"<<endl;
		cout<<"WYNIK SUMOWANIA WYNOSI: "<<a+b;
	}
	
	
	
	return 0;
	
}
