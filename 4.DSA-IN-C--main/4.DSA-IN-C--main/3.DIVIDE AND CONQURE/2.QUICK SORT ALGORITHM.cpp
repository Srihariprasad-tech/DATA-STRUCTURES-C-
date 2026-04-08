#include<iostream>
#include<vector>
using namespace std;
// partition function//
int partition(int arr[],int si,int ei)
{
	int i=si-1;
	int pivot=arr[ei];
	for(int j=si;j<ei;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	i++;
	swap(arr[i],arr[ei]);
	return i;
}
//quick sort function//
void quicksort(int arr[],int si,int ei)
{
	if(si>=ei)
	{
		return ;
	}
	// this is a function to 
	int pivotidx=partition(arr,si,ei);
	
	quicksort(arr,si,pivotidx-1);//left half //
	quicksort(arr,pivotidx+1,ei);// right half//
}

// printing the array//
void printarr(int arr[],int n)
{
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<endl;
}
cout<<endl;
}
// it is a main function//
int main()
{
	int arr[6]={9,8,7,6,5,4};
	int n=6;
	quicksort(arr,0,n-1);
	printarr(arr,n);
	return 0;
}
