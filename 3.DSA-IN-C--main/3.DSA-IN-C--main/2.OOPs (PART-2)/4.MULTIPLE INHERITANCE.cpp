#include<iostream>
using namespace std;
class father
{
	public:
		void fatherfun()
		{
			cout<<"this is a father class"<<endl;
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
class child: public father,public mother
{
	public:
		void childfun()
		{
			cout<<"this is a child class"<<endl;
		}
};
int main()
{
	child ob;
	ob.fatherfun();
	ob.motherfun();
	ob.childfun();
	return 0;
}
