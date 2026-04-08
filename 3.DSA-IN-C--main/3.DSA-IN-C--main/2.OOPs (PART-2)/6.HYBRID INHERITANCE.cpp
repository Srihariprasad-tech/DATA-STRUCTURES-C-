#include<iostream>
using namespace std;
class grandparent
{
	public:
		void grandparentfun()
		{
			cout<<"this is a grandparent class"<<endl;
		}
};
class parent:public grandparent
{
	public:
		void parentfun()
		{
			cout<<"this is a parent class"<<endl;
		}
};
class mother
{
	public:
		void motherfun()
		{
			cout<<"this is a mother class"<<endl;
		}
};
class child:public mother,public grandparent
{
	public:
		void childfun()
		{
			cout<<"this is a child class"<<endl;
		}
};
int main()
{
	child ch1;
	ch1.motherfun();
	ch1.childfun();
	return 0;
}

