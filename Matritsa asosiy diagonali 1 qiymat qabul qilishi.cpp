#include<iostream>
using namespace std;
void matrix_chiqar(int a[10][10],int n)
{
	for(int satr=0; satr <n; satr++)
	{
		for(int ustun=0; ustun<n; ustun++)
		{
			cout<<a[satr][ustun]<<" "; 
		}
		cout<<endl;
	}
}
int main()
{
	int n,a[10][10]={0};
	cout<<"Satr="; cin>>n;
	for(int satr=0; satr<n; satr++)
	{
		for(int ustun=0; ustun<n; ustun++)
		{
			if(satr==ustun) 
			{
				a[satr][ustun]=1;
			}
		}
	}
	matrix_chiqar(a,n);
	
}
