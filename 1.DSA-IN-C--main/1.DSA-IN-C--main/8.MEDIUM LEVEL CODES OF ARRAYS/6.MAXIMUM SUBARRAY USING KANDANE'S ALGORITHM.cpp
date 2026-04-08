 // maxmimu subarray in the given arrays//
 #include<iostream>
#include<algorithm>
using namespace std;
int maxsubarray(int arr[],int n)
{
	int maxsum=arr[0];
	int currsum=arr[0];
	for(int i=1;i<n;i++)
	{
		currsum=max(arr[i],currsum+arr[i]);
		maxsum=max(maxsum,currsum);
	}
	return maxsum;
}
int main()
{
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=maxsubarray(arr,n);
	cout<<"thr maximun subarray in the given array is "<<result<<endl;
	cin.get();
	return 0;
	cin.get();
	}
