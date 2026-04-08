#include<iostream>
using namespace std;
int main()
{
	int n=4;
	// fisrt loop is how many lines//
	for(int i=0;i<n;i++)
	{
	//second loop is how much space//
	for(int j=0;j<=n-i-1;j++)
	{
		cout<<" ";
	}
	//third loop is 1st set of numbers//
	for(int j=1;j<=i+1;j++)
	{
		cout<<j;
	} 
	//fourth loop is 2nd set of numbers//
	for(int j=1; j<=i;j++)
	{
		cout<<j;
	}
	cout<<endl;
}
	return 0;
}
