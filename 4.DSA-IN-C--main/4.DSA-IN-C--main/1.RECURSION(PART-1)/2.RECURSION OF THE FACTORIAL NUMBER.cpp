#include<iostream>
using namespace std;
int function(int n)
{
	if(n==0){
	return 1;
}
	return n*function(n-1);
}
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	int result=function(n);
	cout<<"factorial of the given number is"<<result<<endl;
	return 0;
}
