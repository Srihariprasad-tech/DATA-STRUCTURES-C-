#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"              ";	
	}
	cout<<endl;
}









int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	sort(arr,arr+9,greater<int>());
	print(arr,9);
	return 0;
}
