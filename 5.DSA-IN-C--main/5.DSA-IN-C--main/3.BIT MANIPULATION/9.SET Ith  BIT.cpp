#include<iostream>
using namespace std;
geti(int n,int i)
{
	int bitmask=1<<i;
	return (n|bitmask);
}
int main()
{
	cout<<geti(6,3)<<endl;
	return 0;
}
