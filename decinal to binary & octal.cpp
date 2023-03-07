#include<iostream>
#include<bitset>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>decimaltobinary(int n)
{
	vector<int> binarynum;
	while(n>0)
	{
		binarynum.push_back(n%2);
		n=n/2;
	}
	reverse (binarynum.begin(),binarynum.end());
	return binarynum;
}
vector<int>decimaltooctal(int n)
{
	vector<int> octalnum;
	while(n>0)
	{
		octalnum.push_back(n%8);
		n=n/8;
	}
	reverse(octalnum.begin(),octalnum.end());
	return octalnum;
}
int main()
{
	int decimalnum;
	cout<<"enter a decimal number:";
	cin>>decimalnum;
	cout<<"binary representation:";
	vector<int>binarynum=decimaltobinary(decimalnum);
	for(int i=0;i<binarynum.size();i++)
	{
		cout<<binarynum[i];
	}
	cout<<endl;
	cout<<"octal representation:";
	vector<int> octalnum=decimaltooctal(decimalnum);
	for(int i=0;i<octalnum.size();i++)
	{
		cout<<octalnum[i];
	}
	cout<<endl;
	return 0;
}

