#include<iostream>
using namespace std;
int function(int n)
{
	if(n==0)
	{
		return 0;
	}
cout<<"the number is "<<n<<endl;
function(n-1);
}




int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	function(n);
	return 0;
}
