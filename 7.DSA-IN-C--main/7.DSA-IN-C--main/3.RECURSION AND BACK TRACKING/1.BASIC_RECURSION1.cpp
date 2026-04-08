#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1)
    {
        cout<<"1\n";
        return ;
    }
    cout<<n<<endl;
    print(n-1);
}
int main()
{
    cout<<" good bro learing recursion "<<endl;
    print(1000);
    return 0;
}