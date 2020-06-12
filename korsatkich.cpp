#include<iostream>
using namespace std;
int main()
{
	char *cPtr;
	char s[] = "Sherzod";
	cPtr = s;
	cout<<s<<endl;
	while(*cPtr != '\0')
	{
		cout<<*cPtr<<"="<< (int)*cPtr<<endl;
		cPtr++;
	}
	return 0;
}
