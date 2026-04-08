#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
	int nums[5];
	 int smallest= INT_MAX; //smallest variable=largest number//
	int largest= INT_MIN; //largest variable=smallest number//
	for(int i=0;i<5;i++)
	{
		cin>>nums[i];
	 }
	for(int i=0;i<5;i++)
	{
		smallest=min(nums[i],smallest);
		largest=max(nums[i],largest);
	}
	cout<<"smallest number is" <<smallest<<endl;
	cout<<"largest number is "<<largest<<endl;
	return 0;
}
