#include<iostream>
using namespace std;
//crearting class//
class student 
{
	private:
		string name;
		float cgpa;
		public:
			void getpercentage()
			{
				cout<<(cgpa*10)<<endl;
			}
			//setters functions//
			void setname(string nameval){
				name=nameval;
			}
				void setcgpa(float cgpaval)
				{
					cgpa=cgpaval;
				}
				//getters functions//
				string getname()
				{
					return name;
				}
				float getcgpa()
				{
					return cgpa;
				}
			
};

//main function//
int main()
{
	student s1;
	cout<<"the size allocated to student class is "<<sizeof(s1)<<endl;
	s1.setname("srihariprasad");
	s1.setcgpa(9.9);
	cout<<s1.getname()<<endl;
	cout<<s1.getcgpa()<<endl;
	return 0;
}
