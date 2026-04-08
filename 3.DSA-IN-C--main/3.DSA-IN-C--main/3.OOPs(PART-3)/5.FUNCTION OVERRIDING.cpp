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
};
class child:public parent
{
	public:
	 void function()
	{
		cout<<"it is a child class"<<endl;
	}
};
int main()
{
	child ch1;
	ch1.function();
    return 0; 
    
}
