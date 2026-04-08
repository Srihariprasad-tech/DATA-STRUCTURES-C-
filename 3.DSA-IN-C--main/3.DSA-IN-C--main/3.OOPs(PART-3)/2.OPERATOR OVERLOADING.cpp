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
};
int main()
{
	complex c1(1,2);
	complex c2(3,5);
	c1.shownum();
	c2.shownum();
	return 0;
	
}
