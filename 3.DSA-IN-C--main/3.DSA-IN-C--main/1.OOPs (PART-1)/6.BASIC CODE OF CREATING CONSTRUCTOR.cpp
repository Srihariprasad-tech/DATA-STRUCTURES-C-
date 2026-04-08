#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	float cgpa;
public:
//creating constructor //
student (string n,float c)
{
	name=n;
	cgpa=c;
	}	
};
int main()
{
	student s1("srihariprasad s",9.9);  //constructor is automatically called in int main function//
	return 0;
}
