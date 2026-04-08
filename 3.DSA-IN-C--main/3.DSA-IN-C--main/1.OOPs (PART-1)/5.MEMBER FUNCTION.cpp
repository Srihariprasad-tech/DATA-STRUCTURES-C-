#include<iostream>
using namespace std;
// creating class student//
class student
{
	private:
		string name;
		float cgpa;
	public:
	//creating setter function * the main thing is that setter function is also a member function//
	void setname(string nameval)
	{
		name=nameval;
}
    void setcgpa(float cgpaval)
    {
    	cgpa=cgpaval;
	}
	//creating getter function * the main thing is that getter function is also a member function//
	string getname()
	{
		return name;
	}
	float getcgpa()
	{
		return cgpa;
	}
	
	//another memberfunction that calculate the percentage//
	float calculatepercentage()
	{
		return cgpa*10; // one simple function to calculate function//
	}
};
int main()
{
	student s1;
	// using setter member function//
	s1.setname("sri hari prasad s");
	s1.setcgpa(9.9);
	//using getter member function//
	cout<<"name is "<<s1.getname()<<endl;
	cout<<"cgpa of 1st sem is"<<s1.getcgpa()<<endl;

//using the member function to calculate the percentage//
float percentage=s1.calculatepercentage();
cout<<"percentage is "<<percentage<<endl;
return 0;
	
}
