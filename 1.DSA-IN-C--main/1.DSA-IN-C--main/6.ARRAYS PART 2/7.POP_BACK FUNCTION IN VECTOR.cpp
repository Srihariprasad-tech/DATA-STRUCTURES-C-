#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> num;
	cout<<"the size of the vector before pushback"<<num.size()<<endl;
	num.push_back(4);
	num.push_back(5);
	num.push_back(6);
	cout<<"the size of the vector after pushback"<<num.size()<<endl;
	num.pop_back();
	cout<<"the size of vector after pop back"<<num.size()<<endl;//removes the last element like 6,5,4;//
	for(int val:num)
	{
		cout<<val<<endl;
	}
	return 0;
	}
