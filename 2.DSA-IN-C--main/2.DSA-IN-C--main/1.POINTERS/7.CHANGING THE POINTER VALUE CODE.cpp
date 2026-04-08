#include<iostream>
using namespace std;
int main()
{
	int a=11;
	int *ptr=&a;
	cout<<ptr<<endl;
	cout<<*(ptr)<<endl;
	*ptr=20;
	cout<<a<<endl;
	cout<<*(ptr)<<endl;
	return 0;
}
