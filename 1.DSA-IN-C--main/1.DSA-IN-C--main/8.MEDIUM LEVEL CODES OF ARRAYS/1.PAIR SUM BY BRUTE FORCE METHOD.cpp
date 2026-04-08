#include<iostream>
using namespace std;
void pairsumbruteforce(int arr[],int n,int target)
{
	cout<<"pair with sum is"<<target<<"are"<<endl;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j] == target)
			{
				cout<<arr[i]<<arr[j]<<endl;
			}
		}
	}
	
}

int main()
{
	int arr[]={1,2,3,4,5,};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target =4;
	pairsumbruteforce(arr,n,target);
	return 0;
}
