#include<iostream>
#include<vector>
using namespace std;
int  search(int arr[],int si,int ei,int tar)
{
	int mid=si+(ei-si)/2;
	if(arr[mid]==tar)
	{
		return mid;
	}
	// first if condition//
	if(arr[si]<=arr[mid])
	{
		if(arr[si]<= tar && tar<=arr[mid])
		{
			// left search we should
			return search(arr,si,mid-1,tar);
		}
		else
		{
			//right half we should search//
			return search(arr,mid+1,ei,tar);
		}
	}
	else
	{
		if(arr[mid]<=tar && tar<=arr[ei])
		{
			// right half we should search//
			return search(arr,mid+1,ei,tar);
		}
		else
		{
			// left half we should search//
			return search(arr,si,mid-1,tar);
		}
	}
}
// this is a main function//
int main()
{
	int arr[7]={9,4,5,6,2,1,7};
	int n=7;
	cout<<"idx is"<<search(arr,0,n-1,7);
	return 0;
}
