#include<iostream>
using namespace std;
//1st function//
void fun(int mat[][4],int n,int m)
{
cout<<*(*(mat+2)+2)<<endl;
}
//main function//
int main()
{
	int mat[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
	};
	fun(mat,4,4);
	return 0;
}
