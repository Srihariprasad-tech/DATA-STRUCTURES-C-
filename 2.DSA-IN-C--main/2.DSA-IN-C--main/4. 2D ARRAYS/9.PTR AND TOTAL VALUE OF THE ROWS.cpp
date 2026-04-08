#include<iostream>
using namespace std;
//1st function//
void fun(int mat[][4],int n,int m)
{
	//PTR OF THE ROWS//
	cout<<"oth row ptr"<<mat<<endl;//4 8 12 16//
	cout<<"1st row ptr"<<mat+1<<endl;//+16//
	cout<<"2nd row ptr"<<mat+2<<endl;//+16//
	//TOTAL VALUE OF THE ROW//
	cout<<"0th row value is"<<*mat<<endl;
	cout<<"1st row value is"<<*mat+1<<endl;
	cout<<"2nd row value is"<<*mat+2<<endl;
	
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
