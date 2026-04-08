#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,2,2,3,4,5};
	int maxwater=0;
	int n=6;
	int i=0,j=n-1;
	while(i<j)
	{
	int widt=j-i;
	int height=min(arr[i],arr[j);
	int currwater=widh*height;
	int maxwater=max(currwater,maxwater);
	arr[i]<arr[j]?i++ : j--;	
	}
	return 0;
}
