#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a="<<a<<"b="<<b<<endl;
	return 0;
}
