#include<iostream>
using namespace std;
class reverse
{
	private:
		int n=0;
		int rev=0;
		int rem;
	public:
		void getdata();
		void revnum();
		void putdata();
};
void reverse :: getdata()
{
	cout<<"enter a number:";
	cin>>n;
}
void reverse :: revnum()
{
	while(n>0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
}
void reverse :: putdata()
{
	cout<<"reversed number"<<rev;
}
int main()
{
	reverse std;
	std.getdata();
	std.revnum();
	std.putdata();
	return 0;
}
