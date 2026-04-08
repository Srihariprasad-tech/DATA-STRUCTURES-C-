#include<iostream>
using namespace std;
int sum(int n)
{
if(n==1)
{
    return 1;
}
return n+sum(n-1);
}
int main()
{
    cout<<" the sum of n no is "<<sum(4)<<endl;
    return 0;         
}