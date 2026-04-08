#include<iostream>
#include<string>
using namespace std;
class print
{
	public:
		void function(int x)                 //creating member function//
		{
			cout<<" the number is "<<x<<endl;
		}
		void function(string name)           //constructor overloading takes place//
		{
			cout<<"the name is "<<name<<endl;
		}
};
int main()
{
	print obj1;
	obj1.function("srihari");
	obj1.function(5);
	return 0;
}
