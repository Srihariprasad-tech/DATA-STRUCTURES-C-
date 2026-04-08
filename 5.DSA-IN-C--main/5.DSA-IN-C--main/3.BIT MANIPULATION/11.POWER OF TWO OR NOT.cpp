#include<iostream>
using namespace std;
bool pow(int n)
{
	if(!(n&n-1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	cout<<pow(2)<<endl;
	cout<<pow(4)<<endl;
	cout<<pow(8)<<endl;
	cout<<pow(7)<<endl;
	return 0;
}
