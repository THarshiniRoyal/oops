#include <iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"enter the number:";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        sum=sum+i;
        i++;
    }
    if(sum==n)
    cout<<"it is a perfect number";
    else
    cout<<"it is a not perfect number";
    return 0;
}
