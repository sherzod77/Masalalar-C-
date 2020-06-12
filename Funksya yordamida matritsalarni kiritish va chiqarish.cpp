#include<iostream>
using namespace std;
void matrix_kirit(int a[10][10],int n,int m)
{
	for(int satr=0; satr<n; satr++)
	{
		for(int ustun=0; ustun<m; ustun++)
		{
		cout<<"a["<<satr<<"]["<<ustun<<"]=";
		cin>>a[satr][ustun];
		}
	}
}
void matrix_chiqar(int a[10][10],int n,int m)
{
	for(int satr=0; satr<n; satr++)
	{
		for(int ustun=0; ustun<m; ustun++)
		cout<<a[satr][ustun]<<" ";
		cout<<endl;
	}
}
int main()
{
	int n,m,a[10][10];
	cout<<"Satr="; cin>>n;
	cout<<"Matn="; cin>>m;
	matrix_kirit(a,n,m);
	matrix_chiqar(a,n,m);
}
