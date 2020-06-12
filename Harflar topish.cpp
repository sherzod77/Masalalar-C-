#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[] [20]={"Azamat",
	              "Axror",  
				  "Shoxrux",
				  "Sherzod"} ;
	char  s[] = "A";
	for(int i=0; i<4; i++)
	         if(strncmp(str[i],s,1)==0)
	         cout<<str[i]<<endl;
	         return 0;
	         
	         
}
