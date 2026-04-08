#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	cout<<"factorial is "<<fact<<endl;
	return fact;
	}
int main()
{
	factorial(0);
	factorial(5);
	factorial(10);
	factorial(15);
	factorial(7);
	return 0;
}
