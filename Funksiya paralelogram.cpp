#include<iostream>
using namespace std;
float f(float a,float b, float c)
{
	float V,S;
	V=a*b*c;
	S=2*(a*b+b*c+a*c);
	cout<<"Hajm="<<V;
	cout<<"Yuza="<<S;
}

int main()
{
	float a,b,c,N;
	cin>>a>>b>>c;
	N=f(a,b,c);
}
