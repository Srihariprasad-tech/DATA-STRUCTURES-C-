#include<iostream>
#include<string>
using namespace std;
class student
{ //creating class//
private:       // the attribute cant access directly from main function//
	string name;
	float cgpa;
public:
// creating parameterised construtor//
student(string n,float c)
{
	name=n;
	cgpa=c;
	cout<<"constuctor called"<< " "<<endl;
	}
	// creating copy constructor//
	student(const student &obj)
	{
		name=obj.name;
		cgpa=obj.cgpa;
		cout<<"copy constructor is called"<< " "<<endl;
		}
		// member function to display result//
		void display()
		{
			cout<<"name is"<<" "<<name<<"cgpa is"<<" "<<(cgpa*10)<<endl;
		}
						};
	//in main function//
	int main(){

	student s1("sri hari prasad s",9.9); //directly constructor is called//
	s1.display(); //calling memmber function to display//
	
	student s2=s1;	//copy constructor is called//
	s2.display();
	return 0;
}
