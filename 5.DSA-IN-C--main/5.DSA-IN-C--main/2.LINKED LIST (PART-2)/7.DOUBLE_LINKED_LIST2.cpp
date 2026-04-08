#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        prev=next=NULL;
    }
};
class Doublylist
{
    public:
    node* head;
    node* tail;
    Doublylist()
    {
        head=tail=NULL;
    }
    void push_front(int val)
    {
        node* newnode=new node(val);
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head->prev=newnode;
            head=newnode;

        }
    }
    void printlsit()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<" NULL\n";

    }
};
int main()
{
    Doublylist dbll;
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printlsit();
    return 0;
}