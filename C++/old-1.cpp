#include<iostream>
using namespace std;
void Mfun(int);
void func(int);

main()
{
	int n;
	
	Mfun(n);
	
}

void Mfun(int n)
{
	
	cout<<"enter the value of n :";
	cin>>n;
	func(n);
}

void func(int n)
{
	cout<<"N :"<<n;
}