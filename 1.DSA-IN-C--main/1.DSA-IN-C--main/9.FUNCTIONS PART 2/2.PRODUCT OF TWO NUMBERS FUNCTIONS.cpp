#include<iostream>
using namespace std;
int multi()
{
int a=4;int b=6;
 int c=a*b;
return c;
}
int main()
{
int c=multi();//if any operation is done in the function without copying the parameters we should declare the varaible in main fuction to store the value that was performed in function//
	cout<<"the multiplication of two number is "<<c<<endl;
	return 0;
}
