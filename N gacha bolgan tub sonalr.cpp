#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	bool tub;
	for(int i=2; i<n; i++)
	{
		tub= true;
		for(int j=2; j<i; j++)
		{
			if(i%j==0)
			tub=false;
		}
	if (tub==true)
   cout<<i<<endl;
	
	}
	
	
}
