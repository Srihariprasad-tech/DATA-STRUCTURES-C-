#include<iostream>
using namespace std;
void referenceval(int &par)
{
	 par=111;
	cout<<par<<"\n"<<endl;
}
int main()
{
	int a=10;
	int &para=a;
	referenceval(a);
	cout<<para<<endl;
	return 0;
}
