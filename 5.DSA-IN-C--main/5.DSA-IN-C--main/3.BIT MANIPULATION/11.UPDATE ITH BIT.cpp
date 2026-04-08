#include<iostream>
using namespace std;
int updateithbit(int num,int i,int val)
{
	num=num & ~(1<<i);
	num=num|(val<<i);
	return num;
}
int main()
{
cout<<updateithbit(7,3,0);
return 0;
}
