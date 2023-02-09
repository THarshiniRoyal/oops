#include<iostream>
using namespace std;
int main()
{
	int n,reversed=0,remainder,original;
	cout<<"enter the string=";
	cin>>n;
    original=n;
    while(n!=0)
	{
		remainder=n%10;
		reversed=reversed*10+remainder;
		n/=10;
	}
	if(original==reversed)
	cout<<"the is a palindrome";
	else
	cout<<"the is not a palindrome";
	return 0;
}
