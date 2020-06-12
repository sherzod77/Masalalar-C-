#include<iostream>
using namespace std;
int main()
{
	int n,m,i=1,k=0;
	cin>>n;
	cin>>m;
	while (n>m)
	{
		n=n-m;
		k++;
	}
	cout<<"Butun qismi="<<k;
	cout<<"n="<<n;
}
