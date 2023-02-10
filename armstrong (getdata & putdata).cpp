#include<iostream>
using namespace std;
class armstrong
{
	private:
		int rem,num,sum,temp;
	public:
		void getdata();
		void armnum();
		void putdata();
};
void armstrong :: getdata()
{
	cout<<"enter a number:";
	cin>>num;
}
void armstrong :: armnum()
{
	while (temp != 0)
    {
        rem=temp % 10;
        sum=sum+rem*rem*rem;
        temp=temp / 10;
    }
}
void armstrong :: putdata()
{
	if(temp==sum)
	{
	    cout<<"it is a armstrong number";
    }
    else
    {
    	cout<<"it is not a armstrong number";
	}
}
int main()
{
	armstrong std;
	std.getdata();
	std.armnum();
	std.putdata();
	return 0;
}
