#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<endl;
}





int main()
{
	int arr[9]={1,2,4,6,3,7,8,8,9};
	sort(arr,arr+9);
	print(arr,9);
	return 0;
}
