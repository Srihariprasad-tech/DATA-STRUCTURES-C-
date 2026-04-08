#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<char> characters={'a','b','c','d','e'};
	cout<<"size is ="<<characters.size()<<endl;
	for(char valu : characters)
	{
		cout<<valu<<endl;
	}
	return 0;
		}
