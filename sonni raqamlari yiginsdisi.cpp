#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cin>>n;
	while(n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	cout<<"raqamlari yigindisi="<<s;
}
