#include<iostream>
using namespace std;
class queue
{
int *arr;
int capacity;
int currsize;
int f,r;
public:
queue(int capacity)
{
    this->capacity=capacity;
    arr=new int(capacity);
    currsize=0;
    r=-1;
    f=0;
}
void push(int data)
{
    if(currsize==capacity)
    {
        cout<<"queue is full\n";
        return ;
    }
    r=(r+1)%capacity;
    arr[r]=data;
    currsize++;
}
void pop()
{
    if(empty())
    {
        cout<<"queue is empty\n";
        return ;
    }
    f=(f+1)%capacity;
    currsize--;
}
int front()
{
    if(empty())
    {
        cout<<"queue is empty";
        return -1;
    }
    return arr[f];
}
bool empty()
{
    return currsize==0;
}
};
int main()
{
    queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<< q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(5);
    cout<<q.front()<<endl;
    return 0;
}