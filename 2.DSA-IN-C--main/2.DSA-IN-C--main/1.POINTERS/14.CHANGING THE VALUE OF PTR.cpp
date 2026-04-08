#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int b=11;
	int *ptr1=&a;
	int *ptr2=&b;
	ptr2=ptr1;
	cout<<ptr1<<endl;
	cout<<ptr2<<endl;
	cout<<&a<<endl;
	return 0;
	
}
