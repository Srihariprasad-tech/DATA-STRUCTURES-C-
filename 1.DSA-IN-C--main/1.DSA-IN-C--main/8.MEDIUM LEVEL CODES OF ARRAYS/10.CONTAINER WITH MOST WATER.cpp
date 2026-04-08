#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={1,2,2,3,4};
	int maxwater=0;
	int width,height,area;
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		width=j-i;
		height=min(arr[i],arr[j]);
		area=width*height;
		maxwater=max(area,maxwater);
		}
	}
	cout<<"the maxmimum water that can be stored in the container is"<<maxwater<<endl;
	return 0;
}
