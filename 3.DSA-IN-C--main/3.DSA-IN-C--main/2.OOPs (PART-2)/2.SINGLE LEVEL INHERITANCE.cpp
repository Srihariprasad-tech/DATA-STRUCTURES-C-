#include<iostream>
using namespace std;
//creating base class//
class parent
{
	public:
		void parentfun()
		{
			cout<<"this is the parent class"<<endl;
		}
};
//creating child class//
class child: public parent
{
	public:
		void childfun()
		{
			cout<<" this is the child class"<<endl;
		}
};
int main()
{
	child obj;
	obj.parentfun();// calling parent function from child function//
	obj.childfun();//calling its own function that is child function//
	return 0;
}
