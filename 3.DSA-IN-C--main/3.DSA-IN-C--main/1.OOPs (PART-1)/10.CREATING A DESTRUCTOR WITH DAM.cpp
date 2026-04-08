#include<iostream>
#include<string>
using namespace std;
class student
{
	int* marks;	//creates a empty pointer stored in dam// dam=dynamically allocted memory//
	public:
		//creating a constructor//
		student(int n)
		{
			marks=new int(n); //allocate memory dynamically//
			cout<<"constructor marks allocated with value is"<<*marks<<endl;
		}
		//creating a destructor//
		~student()
		{
		cout<<"destructor freeing the memory of the marks"<<*marks<<endl;
		delete marks; //free dynamically allocated memory //
		}
		//creating member function//
		void showmarks()
		{
			cout<<"mark is"<<*marks<<endl;
		}
};
//in main function//
int main()
{
	student s1(99);//automatically constuctor is called//
	s1.showmarks();
	cout<<"inside the main function "<<endl;
	//destructor will be automaticaaly called when s1 goes out of scope//
	return 0;
}
