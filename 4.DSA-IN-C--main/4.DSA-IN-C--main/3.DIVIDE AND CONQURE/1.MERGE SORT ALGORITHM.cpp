#include<iostream>
#include<vector>
using namespace std;
// this is a conqure function used to sort the small array and then into big//
void merge(int arr[],int si,int mid,int ei)
{
	vector<int> temp;
	int i=si;
	int j=mid+1;
	// first while loop //
	
	while(i<=mid &&j<=ei)
	{
		if(arr[i]<arr[j])
		{
			temp.push_back(arr[i]);
			i++;
		}
		else
		{
			temp.push_back(arr[j]);
			j++;
		}
	}
	// second while loop//
	while(i<=mid)
	{
		temp.push_back(arr[i]);
		i++;
	}  
	
	//in 2 and 3rd loop only 1 loop will work that pushes remain elements when the lefft or right index got out of size//
	
	// third while loop //
	while(j<=ei)
	{
		temp.push_back(arr[j]);
		j++;
	}
	// to copy ans vector to arr//
	for(int idx=si,x=0;idx<=ei;idx++)
	{
		arr[idx]=temp[x];
		x++;
	}
}


//first function//
void mergesort(int arr[],int si,int ei)
{
	if(si>=ei)
	{
		return;
	}
	int mid=si+(ei-si)/2;//or we can also use (si+ei)/2;//


//calculating the left half and right half function by dividing the big array into small array//

 mergesort(arr,si,mid);//this is left half function//
 mergesort(arr,mid+1,ei);//this is right half function//
 merge(arr,si,mid,ei);// this is a conqure means combine the small function into big function//
}


// to print the numbers in the array//
void printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

// this is a main function//
int main()
{
	int arr[6]={6,5,4,3,2,1};
	int n=6;
	mergesort(arr,0,n-1);
	// to print the arr numbers so creating new function//
	printarr(arr,n);
	return 0;
}
