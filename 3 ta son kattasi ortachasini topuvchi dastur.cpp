#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b and b > c)
	{
		cout << "kattasi =" << a; cout << "  ortachasi ="<< b;
		cout << "  kichigi =" << c; 
	 } 
	if (b > a and a > c)
	{
	cout << "kattasi =" << b; cout << "  ortachasi ="<< a;
		cout << "  kichigi =" << c; 	
	}
	if (c > a and a > b)
	{
	cout << "kattasi =" << c; cout << "  ortachasi ="<<a ;
		cout << "  kichigi =" << b; 	
	}
	if (a > c and c > b)
	{
		cout << "kattasi =" << a; cout << "  ortachasi ="<< c;
		cout << "  kichigi =" << b; 
	 }
	 if (b > c and c > a)
	{
	cout << "kattasi =" << b; cout << "  ortachasi = "<< c;
		cout << "  kichigi =" << a; 	
	} 
	if (c > b and b > a)
	{
	cout << "kattasi =" << c; cout << "  ortachasi ="<<b ;
		cout << "  kichigi =" << a; 	
	}
	
	
	main ();
	return 0;
}
