#include<iostream>
using namespace std;
class student
{
	private:
		char name[10];
		char dept[10];
		int total;
		float average;
	public:
		void getdata(void);
		void putdata(void);
};
void student :: getdata(void)
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter dept:";
	cin>>dept;
	cout<<"enter total marks out of 500:";
	cin>>total;
	average=(float)total/500*100;
}
void student :: putdata(void)
{
	cout<<"student details:\n";
	cout<<"name:"<<name<<"dept:"<<dept<<"total:"<<total<<"average:"<<average;
}
int main()
{
	student std;
	std.getdata();
	std.putdata();
	return 0;
}
