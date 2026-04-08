

// the moores voting algorithm is the algo where we find the most number of elements in the array//

#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>nums)
{
	int freq=0;int ans=0;
	for(int i=0;i<nums.size();i++)
	{
		if(freq ==0)
		{
			ans=nums[i];
		}
		else if(ans==nums[i])
		{
			freq++;
		}
		else
		{
			freq--;
		}
	}
int count=0;
for(int val:nums)
{
	if(val==ans)
	{
		count++;
	}
}
 if(count>(int)nums.size()/2)
return ans;
else return -1;
}
int main()
{
	vector<int>nums={2,2,1,1,3,4,3,5,6,7,3,3,3,3,3,3,3,3,3,3,3,3};
	int result=majorityelement(nums);
if(result!=-1)
{
	cout<<"the majority element in the given array is "<<result<<endl;}
else
{
	cout<<"no majority element exist in the given array"<<endl;
}
return 0;
}
