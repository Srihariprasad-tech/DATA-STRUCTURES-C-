#include<iostream>
#include<string>
using namespace std;
class A
{
	string secret="secret data ";
	friend class B; //b can acccess the privqte attribute of the class A//
};
class B
{
	public:
		void showsecret(A &obj) //it takes the reference of A object and print the obj.seceret//
		{
			cout<<obj.secret<<endl;
		}
};
int main()
{
	A a1;
	B b1;
	b1.showsecret(a1);// call memberfunction of the class B thst print a1 (private member)// 
	return 0;
}
