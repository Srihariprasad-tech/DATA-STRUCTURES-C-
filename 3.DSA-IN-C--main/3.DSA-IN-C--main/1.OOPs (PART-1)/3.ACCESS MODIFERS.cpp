#include<iostream>
using namespace std;
//creating class//
class student
{
	private:
		string name;
		public:
			float cgpa;
//member function//
void getpercentage()
{
	cout<<(cgpa*10)<<endl;
}
};

//main function//
int main()
{
	student s1;
	cout<<"the size alloted to student class is"<<sizeof(s1)<<endl;
	return 0;
}
