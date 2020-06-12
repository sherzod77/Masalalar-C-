#include<iostream>
using namespace std;
int main()
{
	int n,m,a[10][10];
	cout<<"Satrlar sonini kiriting="; cin>>n;
	cout<<"Ustunlar sonini kiriting="; cin>>m;
	for(int satr=0; satr<n; satr++)
	{
		for(int ustun=0; ustun<m; ustun++)
		{
			cout<<"a["<<satr<<"] ["<<ustun<<"]="; cin>>a[satr][ustun];
		}
	}
	for(int satr=0; satr<n; satr++)
	{
		for(int ustun=0; ustun<m; ustun++)
		{
			cout<<a[satr][ustun]<<" ";
		}
		cout<<endl;
	}
	
}
