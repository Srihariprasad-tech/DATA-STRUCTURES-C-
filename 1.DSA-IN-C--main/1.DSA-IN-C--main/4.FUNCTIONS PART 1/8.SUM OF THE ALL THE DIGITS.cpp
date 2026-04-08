#include<iostream>
using namespace std;
int digitsum(int num )
{
	int digsum=0;
	while(num > 0)
	{
		int lastdigit=num%10;
		num=num/10;
		digsum=digsum+lastdigit;
	}
	return digsum;
}
int main()
{
	cout<<" sum is"<<digitsum(1234)<<endl;
	return 0;
}
