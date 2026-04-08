#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int img;
		public:
			complex(int r,int i)
			{
				real=r;
				img=i;
			}
void shownum()
{
	cout<<real<<"+"<<img<<"i\n";
}
//operator overloading//
void operator + (complex &c2)
{
	int realresult=this->real+c2.real;
	int imagineryresult=this->img+c2.img;
	complex c3(realresult,imagineryresult);
	cout<<"result is " ;
	c3.shownum();
}
};
int main()
{
	complex c1(1,2);
	complex c2(3,5);
	c1.shownum();
	c2.shownum();
	c1+c2;     // adding the complex no syntax//
	return 0;
}
