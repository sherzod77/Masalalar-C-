#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	
	char c[20];
	cout<<"Satrni kiriting=";
	cin.getline(c,sizeof(c));
	for(int i=0; i<strlen(c);i++)
	c[i]= toupper(c[i]);
	cout<<c;
}
