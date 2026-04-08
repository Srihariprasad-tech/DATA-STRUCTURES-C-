#include<iostream>
using namespace std;
int main()
{
	int n;
	bool isprime=true;
cout<<"enter any number"<<endl;
cin>>n;
for(int i=2;i<=n-1;i++)
{
	if(n%i==0)
	{
		isprime =false;
		break;
	}
}
  if(isprime==true)
{
	cout<<"prime number";
}
else
{
	cout<<"its not prime number that you have entered";
}
return 0;
}
