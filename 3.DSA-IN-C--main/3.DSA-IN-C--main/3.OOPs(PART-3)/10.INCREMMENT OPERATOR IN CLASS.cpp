#include<iostream>
using namespace std;
class student
{
	public:
		int x=0;
};
int main()
{
	student s1;
	student s2;
	student s3;
	cout<<s1.x++<<endl;//0//
	cout<<s2.x++<<endl;//0//
	cout<<s3.x++<<endl;//0//
	return 0;
}
