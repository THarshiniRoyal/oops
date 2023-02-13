using namespace std;
#include<iostream>
class cube
{
public:
int a, b;
cube()
{
	cout<<" \nEnter the number of finding cube";
	cin>>a;
	cout<<" \nThe cube root of number by no parmeter "<<a*a*a;
	}	
	cube(int b)
{	
	cout<<" \nThe cube root of number by no parmeter "<<b*b*b;
	}	
};
int main()
{
	int d;
	cout<<"\n Demonstration for  finding cube root of a number";
	cube a; 
	cout<<"\n enter the value for parameterized constructor";
	cin>>d;
	cube c(d);
}
