#include<iostream>
#include<math.h>
using namespace std;
float tringle(float a, float b, float c)
{
	float s,p;
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"yuza="<<s<<endl;
	cout<<"Peremetr="<<p;
}
int main ()
{
	float a,b,c;
	cin>>a>>b>>c;
	cout<<tringle(a,b,c);
    
}

