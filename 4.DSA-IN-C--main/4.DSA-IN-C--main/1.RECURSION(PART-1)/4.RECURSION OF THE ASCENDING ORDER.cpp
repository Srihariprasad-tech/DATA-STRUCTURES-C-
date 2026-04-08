#include<iostream>
using namespace std;
int function(int n)
{
	if(n==0)
	{
	return 1;
}
function(n-1);
cout<<"the number is"<<n<<endl;
}




int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	function(n);
	return 0;
}
