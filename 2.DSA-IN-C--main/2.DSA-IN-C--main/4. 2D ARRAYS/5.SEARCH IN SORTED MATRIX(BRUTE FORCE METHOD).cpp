#include<iostream>
using namespace std;
void linearsearch(int matrix[][4],int n,int target)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]==target)
			{
				cout<<"the index is"<<  "  "<<i<<"  "<<j<<endl;
				return ;
			}
		}
	}
	cout<<"no target is found"<<endl;
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
	int target=55;
	linearsearch(matrix,4,55);
	return 0;
}
