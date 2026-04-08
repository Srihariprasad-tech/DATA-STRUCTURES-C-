#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int n=5;
	int ans[n];
	for(int i=0;i<n;i++)
	{
		ans[i]=1;
		for(int j=0;j<n;j++)
		{
			if(arr[i]!=arr[j])
			{
				ans[i]=ans[i]*arr[j];
			}
		}
	}
	cout<<"the product of given array by itself is "<<endl;
	for(int i=0;i<n;i++)
	{
	cout<<ans[i]<<" ";
	}
	cout<<endl;
	return 0;
}
