#include<iostream>
#include<string>
using namespace std;
class parent
{
	public:
void function()
	{
		cout<<"it is a parent class"<<endl;
	}
	virtual void hello() // creating virtual function in base class//
	{
		cout<<"say hello"<<endl;
	}
};
class child:public parent
{
	public:
	 void function()
	{
		cout<<"it is a child class"<<endl;
	}
	void hello()     // copying virtual function from base class//
	{
		cout<<"say hello"<<endl;
	}
};
int main()
{
	child ch1;
	ch1.function();
	parent *ptr;
	ptr=&ch1; //run time binding//
	ptr->hello();//calling virtual function//
    return 0; 
    
}
