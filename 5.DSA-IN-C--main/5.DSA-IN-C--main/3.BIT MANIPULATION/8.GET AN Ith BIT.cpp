#include<iostream>
using namespace std;
geti(int n,int i)
{
	int bitmask=1<<i;
	if(!(n&bitmask))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	cout<<geti(7,2)<<endl;
	return 0;
}
