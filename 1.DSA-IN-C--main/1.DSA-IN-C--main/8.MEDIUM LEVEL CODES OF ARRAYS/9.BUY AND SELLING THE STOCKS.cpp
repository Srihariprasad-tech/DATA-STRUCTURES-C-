#include<iostream>
using namespace std;
int main()
{
	int maxprofit=0;
	int arr[]={7,1,2,3,6,4};
	int n=6;
	int bestbuy=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>bestbuy)
		{
			maxprofit=max(maxprofit,arr[i]-bestbuy);
		}
		bestbuy=min(bestbuy,arr[i]);
	}
	cout<<"the best time to buy the stock is "<<bestbuy<<endl;
	cout<<"the maximun profit that is got by selling the stock at right time is"<<maxprofit<<endl;
	return 0;
	}
