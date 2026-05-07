#include<iostream>
#include<string>
using namespace std;
class parent
{
	public:
		parent()
{
			cout<<"constructor of parent\n"<<endl;
		}
		~parent()
		{
			cout<<"destructor of the parent\n"<<endl;
		}
};
class child: public parent
{
	public:
		child()
		{
			cout<<"constructor of child \n"<<endl;
		}
		~child()
		{
			cout<<" destructor of the child\n"<<endl;
		}
};
int main()
{
child c1;
return 0;	
}
