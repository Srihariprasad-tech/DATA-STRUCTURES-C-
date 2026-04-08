#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
		float cgpa;
		public:
			//parameterised constructor creating//
			student(string n,float c)
			{
				name=n;
				cgpa=c;
				cout<<"constructor is called"<<endl;
			}
			//in previous code we have created a copy constructor but now we will not create but complier will automatically compile how does it work leet see//
			
			//now creating member function to display the result//
			void display()
			{
				cout<<"name is"<<" "<<name<<"cgpa is "<<" "<<cgpa<<endl;
			}
};
//now making main function//
int main()
{
	student s1("hari prasad ",9.9);//normal constructor is called//
	s1.display(); 
	
	student s2=s1; //complier automatically calls its default copy constructor//
	s2.display();
	return 0;  
}
