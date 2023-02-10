#include<iostream>
using namespace std;
class Employee
{
  int id;
  char name[10];
  public:
  void getdata();
  void putdata();
};
 void Employee::getdata()
{
  cout<<"Enter Id :";
  cin>>id;
  cout<<"Enter Name :";
  cin>>name;
}
void Employee::putdata()
{
  cout<<id<<" ";
  cout<<name<<" ";
  cout<<endl;
} 
int main()
{
  Employee emp[10];
  int n, i;
  cout<<"Enter Number of Employees - ";
  cin>>n;
  for(i = 0; i < n; i++)
    emp[i].getdata();
  cout<<"Employee Data - "<<endl;
  for(i = 0; i < n; i++)
    emp[i].putdata();
}
