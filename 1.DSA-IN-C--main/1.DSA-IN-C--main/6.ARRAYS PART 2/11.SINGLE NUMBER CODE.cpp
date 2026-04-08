#include<iostream>
#include<vector>
using namespace std;
int singlenumber(vector<int> num)
{
	int ans=0;
	for(int val: num)
	{
		ans=ans^val;
	}
	return ans;
}
int main()
{
	vector<int> num={4,2,1,1,2};
	cout<<"the single number is "<<singlenumber(num)<<endl;
	return 0;
}
