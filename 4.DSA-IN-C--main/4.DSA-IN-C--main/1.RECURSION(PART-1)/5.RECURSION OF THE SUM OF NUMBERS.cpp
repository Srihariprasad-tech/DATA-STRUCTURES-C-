#include<iostream>
using namespace std;
int function(int n)
{
	if(n==1)
	{
		return 1;
	}
return	n+function(n-1);
}

	int main()
	{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	cout<<" the sum of the number is"<<function(n)<<endl;
	return 0;
}
