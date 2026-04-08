#include<iostream>
using namespace std;
int main()
{
	int n=10;
	int sum=0;
	int i;
	   for( i=1;i<=n;i++)
	{
		sum+=i;
		if(i==5)
		{
			break;
		}
	}
	cout<<"sum is "<<sum;
	return 0;
}
