#include<iostream>
#include<vector>
#include<string>
using namespace std;
// creating stack using vector>
template<class t>
class stack
{
    vector<t>vec;
    public:
    void push(t val)
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
t top()
{
  //  if(isempty())
//{
   // cout<<" stack is empty"<<endl;
   // return -1;

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
    stack<char> s;
    s.push('c');
    s.push('b');
    s.push('a');
    while(!s.isempty())
    {
cout<<s.top()<<endl;
s.pop();
    }
    cout<<endl;
    return 0;
}
