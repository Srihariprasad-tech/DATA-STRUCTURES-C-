#include<iostream>
using namespace std;
bool issorted(int arr[],int n,int i)
{
	if(i==n-1)
	{
		return true;
	}
	else if (arr[i]>arr[i+1])
	{
		return false;
	}
	return issorted(arr,n,i+1);
}

int main()
{
	int arr1[]={1,2,3,4,5};//sorted 0//
	int arr2[]={1,2,4,3,5};//unsorted 1//
	cout<<issorted(arr2,5,0);
	return 0;	
}
