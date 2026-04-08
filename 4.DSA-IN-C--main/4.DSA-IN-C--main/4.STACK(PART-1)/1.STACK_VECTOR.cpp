#include<iostream>
#include<vector>
using namespace std;
class stack
{
    vector<int>vec;
    public:
    void push(int val)
    {
    vec.push_back(val);
    }
void pop()
{
    if(isempty())
    {
        cout<<" stack is empty"<<endl;
        return ;
    }
    vec.pop_back();
}
int top()
{
    if(isempty())
{
    cout<<" stack is empty"<<endl;
    return -1;
}
int lastidx=vec.size()-1;
return vec[lastidx];
}
bool isempty()
{
    return vec.size()==0;
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