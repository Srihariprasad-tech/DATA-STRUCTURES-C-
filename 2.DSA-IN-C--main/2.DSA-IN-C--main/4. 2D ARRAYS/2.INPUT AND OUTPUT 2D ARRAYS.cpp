#include<iostream>
using namespace std;
int main()
{
	int marks[3][4];
	int n=3,m=4;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cin>>marks[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<marks[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}
