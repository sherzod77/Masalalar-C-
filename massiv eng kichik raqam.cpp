#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int i,n,min,orni;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";  
		cin>>a[i];
	}
	min = a[0];
	orni=0;
	for(i=1;i<n;i++)
	{
	if( min > a[i])
	min = a [i];
	orni=i;
	}
	cout<<"Eng kichik soni="<<min<<endl;
	cout<<"massivdagi o'rni="<<orni;
	return 0;
}
