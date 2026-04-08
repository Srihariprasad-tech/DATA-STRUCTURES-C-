#include<iostream>
using namespace std;
//second function//
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}

//first function//



void func(int arr[],int n)//if we not declearing the answer in the main function then use void function//
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	return print(arr,n);
}



//main funvtion//

int main()
{
	int arr[]={5,2,1,4,3};
	int n=5;
	func(arr,n);
	return 0;
}
