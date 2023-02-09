#include<iostream>
using namespace std;
int main()
{
    int m,n,a;
    int sum=0;
    cout<<"enter a number:";
    cin>>n;
    m=n;
    while(n!= 0)
	{
        a=n% 10;
        n=n/10;
        sum=sum+a;
        {
            if((m%sum)==0)
            cout<< "it is a Harshad's number";
            else
            cout<< "it is not a Harshad's number";
            return 0;
        }
    }
}
