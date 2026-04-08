#include<iostream>
using namespace std;
void change(int *ptr)
{
	*ptr=20;//the value will not change in the pointer it go to the stored address in the pointer and change the value in that variable //
	cout<<*ptr<<endl;
}
int main()
{
	int a=10;
     change(&a);
     cout<<"the value of a is"<<a<<endl;
}
