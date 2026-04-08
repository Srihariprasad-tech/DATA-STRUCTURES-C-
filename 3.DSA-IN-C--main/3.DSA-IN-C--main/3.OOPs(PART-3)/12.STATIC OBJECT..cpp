#include<iostream>
using namespace std;
class student
{
	public:
	 student()
	{
		cout<<"constructor is called"<<endl;
	}
	~ student()
	{
		cout<<"destructor is called"<<endl;
	}
};
int main()
{
	int a;
	if (a==0)
	{
	student s1;
}
cout<<"the code has ended"<<endl;
return 0;
}
