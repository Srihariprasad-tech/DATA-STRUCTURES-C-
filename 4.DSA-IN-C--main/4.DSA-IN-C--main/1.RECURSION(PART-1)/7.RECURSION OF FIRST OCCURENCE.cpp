#include<iostream>
#include<vector>
using namespace std;
int function(vector<int>ans,int i,int target)
{
	if(i==ans.size()){
		return -1;
	}
	if(ans[i]==target)
	{
		return i;
	}
	return function(ans,i+1,target);
	}





int main()
{
	vector<int>ans={1,2,3,4,5};
cout<<function(ans,0,3)<<endl;
return 0;
}
