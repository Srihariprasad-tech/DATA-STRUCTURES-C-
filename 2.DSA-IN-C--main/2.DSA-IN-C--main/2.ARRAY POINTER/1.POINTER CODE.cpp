#include<iostream>
using namespace std;
int main()
{
	int x=4;
	int *ptr=&x;
	cout<<"value of the pointer is "<<*ptr<<endl;
	int y=5;
	ptr=&y;
	cout<<"value of the pointer is "<<*ptr<<endl;
	return 0;
}
