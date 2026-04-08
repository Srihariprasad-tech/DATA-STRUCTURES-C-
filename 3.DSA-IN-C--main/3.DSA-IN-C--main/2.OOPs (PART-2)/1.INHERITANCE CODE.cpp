#include<iostream>
#include<string>
using namespace std;
//creating parent class//
class parent
{
	public:
		void greet()
		{
			cout<<"hello from parent class"<<endl;
		}
};
//creating a child class inheriting from parent//
class child: public parent // synatx to create a child class//
{
	public:
		void sayhi()
		{
			cout<<"hello from child class "<<endl;
		}
};
//in main function//
int main()
{
	child c;// creating object of child class//
	c.greet();//calling inherited function from parent//
	c.sayhi();//calling own function of child//
	return 0;
}
