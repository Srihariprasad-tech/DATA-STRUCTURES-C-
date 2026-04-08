#include<iostream>
using namespace std;
class student
{
	public:
static int x;
};
int student::x=0;// to create the static variable in the class//
int main()
{
	student s1;
	student s2;
	student s3;
	cout<<s1.x++<<endl;//0//
	cout<<s2.x++<<endl;//1//
	cout<<s3.x++<<endl;//2//
	return 0;
}
