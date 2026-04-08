#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6};
	int *sri=arr;
	int *hari=sri+5;
	cout<<"the value of the first pointer is "<<*sri<<endl;
	cout<<"the value of the second pointer is "<<*hari<<endl;
	cout<<(*sri==*hari)<<endl;
	cout<<(*sri>=*hari)<<endl;
	cout<<(*sri<=*hari)<<endl;
	return 0;
}
