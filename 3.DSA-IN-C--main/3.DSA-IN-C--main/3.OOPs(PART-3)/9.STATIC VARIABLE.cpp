#include<iostream>
using namespace std;
void fun()
{
static	int x=0; //CREATING STATIC KEYWORD WHICH IS LIFE TIME VARAIABLE WHICH DOESNOT CHANGE VALUE WHEN THE FUNCTION IS CALLED MORE THAN 1 TIME//
	x++;
	cout<<"value of the x is"<<x<<endl;
};

int main()
{	fun();
	  fun();
	  fun();
	return 0;
}
