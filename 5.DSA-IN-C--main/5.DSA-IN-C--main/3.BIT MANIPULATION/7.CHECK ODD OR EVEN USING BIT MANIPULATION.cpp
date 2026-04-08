#include<iostream>
using namespace std;
oddoreven(int n)
{
	if(!(n&1))
	{
		cout<<"the number is even no"<<endl;
	}
	else
	{
		cout<<"the numnber is an odd no"<<endl;
	}
}
	int main()
	{
	oddoreven(4);
	oddoreven(5);
	oddoreven(7);
	return 0;	
	}
	

