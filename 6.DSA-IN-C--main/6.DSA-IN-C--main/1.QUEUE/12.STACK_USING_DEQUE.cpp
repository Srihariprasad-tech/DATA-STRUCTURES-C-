#include<iostream>
#include<deque>
using namespace std;
 class stack
 {
    deque<int> deq;
    public:
    void push(int data)
    {
        deq.push_front(data);
    }
    void pop()
    {
        deq.pop_front();
    }
    int top()
    {
        return deq.front();
    }
 };
 int main()
 {
    stack s;
    for(int i=1;i<=5;i++)
    {
        s.push(i);
    }
    for(int i=1;i<=5;i++)
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
 }
