#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int age[10]={11,23,54,22,18,19,10,66,100,45};
	int largest= INT_MIN;
	for(int i=0;i<10;i++)
	{
		if(age[i]>largest)
		{
		largest=age[i];
	}
}
	cout<<"the largest number in the given array is "<<largest<<endl;
	return 0;
}
