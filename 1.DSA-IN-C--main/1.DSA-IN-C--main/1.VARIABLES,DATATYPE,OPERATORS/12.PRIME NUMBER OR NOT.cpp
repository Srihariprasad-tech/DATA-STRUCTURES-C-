#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	if(n<=1)
	{
		cout<<"you entered the number which is negative or 0 number"<<endl;
	}
	else
	{
		int i;
	for( i=2;i<=n-1;i++)
	{
		if(n%i==0) 
		{
			cout<<"the number you have entered is not a prime number"<<endl;
			break ;
		}
	}
	if(i==n){
		cout<<"you entered the number that is prime number"<<endl;
	}
	}
	return 0;
}

																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
