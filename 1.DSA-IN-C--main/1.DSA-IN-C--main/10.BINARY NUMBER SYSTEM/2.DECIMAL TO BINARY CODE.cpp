#include<iostream>
using namespace std;
void dectobin(int decnum)//if we want to declare the ans in main function the return type is int//
{
	int n=decnum;
	int pow=1;
	int binnum=0;
	while(n>0)
	{
		int rem=n%2;
		binnum=binnum+rem*pow;
		n=n/2;
		pow=pow*10;
	}
	cout<<"binary num is"<<binnum<<endl;//if we want to declare the ans in the function itself so return type is void //
}
int main()
{
	dectobin(4);
	return 0;
}


