#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	int arr[] = {2,3,5,5,4,3,2,2,6};
	sort(arr + 1, arr + 4); 
	print(arr, 4);
	return 0;
}

