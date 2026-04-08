#include<iostream>
using namespace std;
int minoftwo(int a,int b)
{
	if (a<b) 
		{
			return a;
		}
		else
		{
			return b;
		}
	}
	int main()
	  {
		cout<<"min is ="<<minoftwo(5,3)<<endl;
		return 0;
}
