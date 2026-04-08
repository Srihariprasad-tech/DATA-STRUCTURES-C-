#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your sanskrit subject marks"<<endl;
	cin>>marks;
	if(marks>=95)
	{
		cout<<"you have got good marks";
	 }
	else if(marks>=80 && marks<=90)
	{
		cout<<"you are about to go top on next time"<<endl;
	}
	else
	{
		cout<<"practise very hard to stay on top"<<endl;
	}
	return 0;
}
