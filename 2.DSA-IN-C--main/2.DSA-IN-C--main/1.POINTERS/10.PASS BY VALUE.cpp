#include<iostream>
using namespace std;
void change(int a)
{
	a=10*10;
	cout<<"the value of a is "<<a<<endl;
}
int main()
{
	int a=10;
	change(a);
	cout<<"the value of a is"<<a<<endl;
	return 0;
}
