#include<iostream>
using namespace std;
class harshad
{
	private:
		int m,n,a;
        int sum=0;
    public:
    	void getdata();
    	void harsnum();
    	void putdata();
};
void harshad :: getdata()
{
	cout<<"enter a number:";
	cin>>n;
}
void harshad :: harsnum()
{
	while(n!= 0)
	{
        a=n% 10;
        n=n/10;
        sum=sum+a;
    }
}
void harshad :: putdata()
{
	if((m%sum)==0)
	{
        cout<< "it is a Harshad's number";
    }
    else
    {
        cout<< "it is not a Harshad's number";
    }
}
int main()
{
	harshad std;
	std.getdata();
	std.harsnum();
	std.putdata();
	return 0;
}
