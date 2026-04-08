#include<iostream>
using namespace std;
int changex(int x)
{
	x=2*x;
	cout<<"x is ="<<x<<endl;
}
int main()
{
	int x=5;
	changex(x);
	cout<<"'x="<<x<<endl;
	return 0;
}
