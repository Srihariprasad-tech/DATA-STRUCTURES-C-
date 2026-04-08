#include<iostream>
using namespace std;
int main()
{
	int x,n;
	cout<<"enter the value of x "<<endl;
	cin>>x;
	cout<<"enter the value of n"<<endl;
	cin>>n;
long binform=n;
double ans=1;
while(binform>0)
{
	if(binform%2==1)
	{
		ans=ans*x;
	}
	x=x*x;
	binform=binform/2;
}
cout<<"the exponential power of the given numbers is"<<ans<<endl;
return 0;
}
