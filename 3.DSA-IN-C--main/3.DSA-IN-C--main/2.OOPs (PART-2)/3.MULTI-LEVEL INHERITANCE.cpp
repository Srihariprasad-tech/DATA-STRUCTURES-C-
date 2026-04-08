#include<iostream>
using namespace std;
//creating base class//
class grandparent
{
	public:
		void grandparentfun()
		{
			cout<<"this is grandparent class"<<endl;
		}
};
class parent: public grandparent
{
	public:
		void parentfun()
		{
			cout<<"this is parent class"<<endl;
		}
};
class child: public parent
{
	public:
		void childfun()
		{
			cout<<"this is a child class"<<endl;
		}
};
int main()
{
child ch;
ch.grandparentfun();
ch.parentfun();
ch.childfun();
return 0;	
}
