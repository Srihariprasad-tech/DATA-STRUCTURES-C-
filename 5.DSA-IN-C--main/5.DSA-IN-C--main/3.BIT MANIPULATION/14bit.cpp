#include<iostream>
using namespace std;
void fastexpo(int x,int n)
{
    int ans=1;
while(n>0)
{
    int lastbit=n&1;
    if(lastbit)
    {
        ans=ans*x;
    }
    x=x*x;
    n=n>>1;
}
cout<<ans<<endl;
}
int main()
{
    fastexpo(2,3);
    fastexpo(3,2);
    return 0;


}