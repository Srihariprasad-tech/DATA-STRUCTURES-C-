#include<iostream>
using namespace std;
int multi(int a,int b, int c)
{
	int multi =a*b*c;
	return multi;
}
int main()
{
int a,b,c;	
cout<<"enter the first number";
cin>>a;
cout<<"enter the second number";
cin>>b;
cout<<"enter the third number";
cin>>c;
cout<<"the multiplication of two numbers is"<<multi(a,b,c)<<endl;
return 0;
}
