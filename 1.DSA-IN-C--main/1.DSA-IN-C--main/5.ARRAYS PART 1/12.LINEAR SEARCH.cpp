#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[]={4,3,2,5,8,0,9,};
	int size=7;
	int target= 0;
	cout<<"the target index of the number is"<<linearsearch(arr,size,target)<<endl;
	return 0;
}
