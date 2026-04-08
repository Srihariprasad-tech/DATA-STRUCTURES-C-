#include<iostream>
using namespace std;
void print()
{
	cout<<"infinite class"<<endl;
	print();//it is a best example of the stack overflow as the stack is filled with infinte class then the stack overflows and the code gets end//
}


int main()
{
	print();
}
