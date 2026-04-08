#include<iostream>
using namespace std;
cleari(int n,int i)
{
	int bitmask=~(1<<i);
	return n&bitmask;
}
int main()
{
	cout<<cleari(6,1)<<endl;
	return 0;
}
