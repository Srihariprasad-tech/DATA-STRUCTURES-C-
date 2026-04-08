#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num;
	num.push_back(25);
	num.push_back(50);
	num.push_back(75);
	num.pop_back();
	num.pop_back();
	cout<<num.at(0)<<endl;
	return 0;
}
