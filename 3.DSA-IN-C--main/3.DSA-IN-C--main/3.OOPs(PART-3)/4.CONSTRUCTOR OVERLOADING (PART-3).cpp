#include<iostream>
using namespace std;
class print
{
private:
int real;
int img;
public:
void printfun(int n ,int s)
{
	real=n;
	img=s;
	}
void display()
{
	cout<<real<<" +"<<img<<" i\n";
}
//operator overloading//
void operator *(print &p2)
{
	int realresult=this->real*p2.real;
	int imaginaryresult=this->img*p2.img;
	print p3;
	p3.printfun (realresult,imaginaryresult);
	cout<<" res=";
	p3.display();
}
};
int main()
{
	print p1,p2;
	p1.printfun(5,5);
	p2.printfun(5,5);
	p1.display();
	p2.display();
	p1*p2;
	return 0;
}
