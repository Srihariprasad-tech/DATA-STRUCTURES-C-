#include<iostream>
using namespace std;
int sumoftwo(int a, int b)
{
	  int sum=a+b;
	return sum;
}
int main()
{
	int a,b;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"the sum of two input numbers is"<<sumoftwo(a,b);
	return 0;
}
