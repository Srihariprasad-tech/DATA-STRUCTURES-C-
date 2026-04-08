#include<iostream>
using namespace std;
int main()
{
	int size=6;
	int marks[size];
	int sum;
	for(int i=0;i<size;i++)
	{
		cin>>marks[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<marks[i]<<endl;
		
	}
sum=marks[0]+marks[1]+marks[2];
cout<<sum<<endl;
	
	return 0;
}
