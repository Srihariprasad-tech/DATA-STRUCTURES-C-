#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class queue
{
node* head;
node* tail;
public:
queue()
{
    head =tail =NULL;
}
void push(int data)
{
    node* newnode= new node(data);
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void pop()
{
    if(empty())
    {
        cout<<"queue is empty"<<endl;
        return ;
    }

    node* temp=head;
    head=head->next;
    delete temp;
}

int front()
{
    if(empty())
    {
        cout<<"queue is  empty"<<endl;
        return -1;
    }
    return head->data;
}
bool empty()
{
    return  head==NULL;
}
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    while( !q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}