#include<iostream>
using namespace std;
class cube
{
public:
int a, n;
	cube(int n)
{
	int sum;
	sum=(n*(n+1))/2;
	cout<<" ";
	cout<<"Sum of the series: ";
	for (int i =1;i <= n;i++) 
	{
		if (i!=n)  
		cout<<i<<"+" ;
		else
		cout<<"="<<sum;
	
	}	
}
};
int main()
{
	int d;
	cout<<"\n enter the value for parameterized constructor";
	cin>>d;
	cube c(d);
}
