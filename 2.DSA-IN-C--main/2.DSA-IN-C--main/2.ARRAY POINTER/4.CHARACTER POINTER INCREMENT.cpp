#include<iostream>
using namespace std;
int main()
{
	char ch='a';
	char *ptr=&ch;
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
	return 0;
}
