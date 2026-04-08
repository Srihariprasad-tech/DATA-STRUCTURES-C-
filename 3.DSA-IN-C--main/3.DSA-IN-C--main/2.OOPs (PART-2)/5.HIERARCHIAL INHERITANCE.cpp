#include<iostream>
using namespace std;
class parent
{
	public:
		void parentfun()
		{
			cout<<"this is a parent class"<<endl;
		}
};
class child1:public parent
{
	public:
		void child1fun()
		{
			cout<<"this is a child1 class"<<endl;
		}
};
class child2:public parent
{
	public:
		void child2fun()
		{
			cout<<"this is a child2 class"<<endl;
		}
};
int main()
{
	child1 ch1;
	child2 ch2;
	cout<<"object of the child1"<<endl;
	ch1.parentfun();
	ch1.child1fun();
	cout<<"object of the child2"<<endl;
	ch2.parentfun();
	ch2.child2fun();
	return 0;
}
