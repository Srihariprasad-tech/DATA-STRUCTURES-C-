#include<iostream>
#include<cstring>
using namespace std;
class student
{
public:
	string name;
	//creating constructor//
	student(string n)
	{
		name=n;
		cout<<"constructor is called for"<<" "<<name<<endl;
	}
	//creating destructor //
	~student()
	{
		cout<<"destructor is called for"<<" "<<name<<endl;
	}
};
int main()
{
	student s1("srihari");  //first object is created//
	student s2("prasad");   //second object is created//
	cout<<"inside main function"<<endl;
	return 0;  
}

