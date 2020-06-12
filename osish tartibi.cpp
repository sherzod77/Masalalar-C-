#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int min,k,n;
	cout<<"Raqamlar sonini kiriting"; cin>>n;
	int a[n];
	for(int i=0; i<=n; i++)
	{
	cout<<"a["<<i<<"]="; 
	cin>> a[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}	
	}
	for(int i=0; i<=n; i++)
	{
	cout<<a[i]<<" ";
	cout<<endl;
	}	
}
