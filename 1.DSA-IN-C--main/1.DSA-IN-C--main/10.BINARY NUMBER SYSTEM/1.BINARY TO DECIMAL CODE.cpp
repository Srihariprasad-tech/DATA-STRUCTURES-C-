#include<iostream>
using namespace std;
void bintodec(int binNum)
{
	int n=binNum;
	int decNum=0;
	int pow=1;
	while(n>0)
	{
		int lastdigit=n%10;
		decNum=decNum+lastdigit*pow;
		pow=pow*2;
		n=n/10;
	}
	cout<<"the decimal number is"<<decNum<<endl;
   }   
 int main()
 {
 	bintodec(101);
 	return 0;
   }  
