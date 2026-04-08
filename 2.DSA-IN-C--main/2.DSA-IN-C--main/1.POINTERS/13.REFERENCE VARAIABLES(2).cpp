#include<iostream>
using namespace std;
void fund(int &b)
{
	b=10*5;
	cout<<b<<endl;
}
int main()
{
	int a=100;
	int &b=a;
	fund(a);
	cout<<"the value of a"<<a<<endl;
	return 0;
}
