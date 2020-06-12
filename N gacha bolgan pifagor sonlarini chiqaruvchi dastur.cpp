#include<iostream>
using namespace std;
int main()
{
	int a,b,c,n;
	cin>>n;
	for(int a=1; a<=n; a++)
	{
		
		for(int b=1; b<=n; b++)
		{
			for(int c=1; c<=n;c++)
			{
				if(a*a+b*b==c*c)
				{
					cout<<a<<"\t"<<b<<"\t"<<c<<endl;
				}
			}
		}
				
	}
	
	
}

