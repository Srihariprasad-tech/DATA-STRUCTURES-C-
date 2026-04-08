#include<iostream>
using namespace std;
int main()
{
	int s=10;
	int *ptr=&s;
	int **pptr=&ptr;
	cout<<&ptr<<"=="<<pptr<<endl;
	return 0;
}
