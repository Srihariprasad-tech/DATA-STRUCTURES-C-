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
static	student s1; //USING STATIC KEYWORD MEANS FIRST CONSTRUCTOR AND COMES TO MAIN FUNCTION OF THE CODE  AND THEN CODE THE DESTRUCTOR IS CALLED//
}
cout<<"the code has ended"<<endl;
return 0;
}
