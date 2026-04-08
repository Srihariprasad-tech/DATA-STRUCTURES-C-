#include<iostream>
#include<cstring>
using namespace std;
//creating class//
class user
{
	//attributes//
	int id;
	string name;
	string password;
	string bio;
	//member function//
	void deactive()
	{
		cout<<"deleting account"<<endl;
	}
	void editbio(string newbio)
	{
		bio=newbio;
	}
};


//main function//                   //we cant access attribute oe member function from main finction as it is bydefault set as private//
int main()
{
	user u1;
	cout<<"the size allociated to the class user is "<<sizeof(u1)<<endl;
	return 0;
}
