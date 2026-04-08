#include<iostream>
using namespace std;

//second function//

bool binarysearch(int mat[][4],int n,int key)
{
	int i=0,j=n-1;
	while(i<n&&j>=0)
	{
    if (mat[i][j]==key)
    {
    	cout<<" found at cell"<<"    "<<i<<"  "<<j<<endl;
		return true; 
	}
	else if(mat[i][j]>key)
	{
		j--;
	}
	else if(mat[i][j]<key)
	{
		i++;
	}
	}
	cout<<"key not found"<<endl;
}

//main function//

int main()
{
	int matrix[4][4]={
	{10,20,30,40},
    {15,25,35,45},
	{27,29,37,48},
	{32,33,39,50}
	};
	int key=50;
	binarysearch(matrix,4,50);
	return 0;
}
