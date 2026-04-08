#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num;
	num.push_back(1);
	num.push_back(2);
	num.push_back(3);
	cout<<num.size()<<endl;
	cout<<num.capacity()<<endl;
	return 0;
}
