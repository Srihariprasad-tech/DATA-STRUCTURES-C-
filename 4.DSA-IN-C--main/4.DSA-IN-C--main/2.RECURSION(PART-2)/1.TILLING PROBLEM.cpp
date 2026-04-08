#include<iostream>
using namespace std;
//function//
int function(int n)
{
if (n==0||n==1)
{
	return 1;
}
//vertical//
int ans1=function(n-1);
//horizontal//
int ans2=function(n-2);
return ans1+ans2;
}




int main()
{
	int a;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"the total ways are "<<function(a)<<endl;
	return 0;
}
