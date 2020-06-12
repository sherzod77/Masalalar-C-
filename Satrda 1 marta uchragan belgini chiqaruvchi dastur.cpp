#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
void func(char *a)
{
    int k=strlen(a);
	int n=0;
	for(int i=0; i<k-1; i++)
	{
		n=0;
		for(int j=i+1; j<k;j++)
		{
			
			if(a[i]==a[j])
			{
				n++;
			}
			if(n==1)
			{	
			for(int f=0; f<k; f++)
			{
				a[f]=a[i];
				if(a[i]!=a[f-1])
				{
					cout<<a[i]<<" ";
				}
			}
			}
		}
		
	}
}

int main()
{
	char  *satr[50];
	cin>>*satr;
	func(*satr);
	
    
}
