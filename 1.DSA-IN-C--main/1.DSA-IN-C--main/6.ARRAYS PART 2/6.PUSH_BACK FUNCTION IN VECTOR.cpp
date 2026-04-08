#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num;
	cout<<"size is ="<<num.size()<<endl;
	num.push_back(25);
	cout<<"after push back the size is"<<num.size()<<endl;
	return 0;
}
