#include<iostream>
#include<string>
using namespace std;
// class declartion//
class student                                    // by default the student class is private so any memberfunctions cant acces from main function//
{
	//properites or attribute or data members//
	string name;
	float cgpa;
	
	//methods or member function//
	void getpercentage()
	{
		cout<<(cgpa*10)<<" %n";
	}
};

//main function//
int main()
{
	student s1; //object//
	cout<<sizeof(s1)<<endl;
	return 0;
}
