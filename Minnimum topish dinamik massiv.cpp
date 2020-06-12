#include<iostream>
using namespace std;
int main()
{
	int n,s=0,min;
	int *a;
	cin>>n;
	a=new int[n];
	if(a==NULL)
	{
		cout<<"Xotira Yetarli emas";
		return 1;
	}	
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="; 
		cin>>a[i];
	}
	min=a[0];
	for(int i=1;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	delete []a;
	cout<<"Minimum="<<min;
	
}
