#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num;
	cout<<" the size of the vector before pushback is"<<num.size()<<endl;
	num.push_back(25);
	num.push_back(50);
	num.push_back(75);
	cout<<"the size of the vector after the pushback"<<num.size()<<endl;
	for(int val:num)
	{
		cout<<val<<endl;
	}
	return 0;
}
