#include<iostream>
using namespace std;
int main()
{
	int s=4;
	int *sri=&s;
	cout<<sri<<endl;
	sri++;
	cout<<sri<<endl;
	sri--;
	cout<<sri<<endl;
	return 0;
}
