#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>arr,int tar,int st,int end )
{
    if(st<=end)
    {
        int mid=st+(end-st)/2;
    if(arr[mid]==tar)
    {
        return  mid;
    }
    else if(arr[mid]<  tar)
    {
return binary(arr,tar,mid+1,end);
    }
    else{
        return binary(arr,tar,st,mid-1);
    }
    }
    return -1;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int tar=2;
    int st=0;
    int end=arr.size()-1;
cout<<" the target is "<<binary(arr,tar,st,end);
return 0;
}