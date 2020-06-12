#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,j,n,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]="; 
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
		  k = a[i];
		a[i]=a[j];
		a[j] = k;
		}
		}
	}
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
