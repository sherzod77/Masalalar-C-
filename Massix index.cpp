#include<iostream>
using namespace std;
int main()
{
 int a[10];
 int i,j,k,n;
 cin>>n;
	 for(i=0;i<n;i++)
 	{
 		cout<<"a["<<i<<"]=";
		cin>>a[i];	
	}		
		for(i=0;i<n-1;i++)
		{
			int index=i;
			for(j=i+1;j=n;j++)
			{
				if(a[index]>a[j])
				{
					index=j;
				}
			}
				k=a[index];
				a[index]=a[j];
				a[j]=k;
				
		}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
