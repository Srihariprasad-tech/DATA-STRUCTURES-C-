#include<iostream>
using namespace std;
class stack
{
    int arr[100];
    int topindex;
    public:
    stack()
    {
        topindex=-1;
    }
void push(int val)
{
    if(topindex==99)
    {
        cout<<"stack overflow"<<endl;   
    return;
}
arr[++topindex]=val;
}
void pop()
{
    if(isempty())
    {
        cout<<"stack is empty"<<endl;
        return ;
    }
    topindex--;
}
int top()
{
    if(isempty())
    {
        cout<<" stack is empty"<<endl;
        return -1;
    }
    return arr[topindex];
}
bool isempty()
{
    return topindex==-1;
}
};
int main()
{
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);
    while(!s.isempty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}