//to find the most number of elements in the array//

#include<iostream>
using namespace std;
int majorityelement(int arr[],int n)
{
int i=0;
while(i<n)
{
	int count=0;
	int j=0;
	while(j<n)
	{
		if(arr[i]==arr[j])
		{
			count++;
		}
		j++;
	}
	if(count>n/2)
	{
		return arr[i];
	}
	i++;
	}
	return -1;
}
int main()
{
int arr[]={2,1,3,2,1,2,2,2};
int n=sizeof(arr)/sizeof(arr[0]);
int result=majorityelement(arr,n);
if(result!=-1)
{
	cout<<"majority element is ="<<result<<endl;
}	
else
{
cout<<"no majority element found"<<endl;}
return 0;
}
	
