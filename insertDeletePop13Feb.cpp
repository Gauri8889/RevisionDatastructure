//code of circular queue
#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int newdata)
    {
        data = newdata;
        next = NULL;
    }
};
Node *frnt;
Node *rear;
class que{
public:
    que()
    {
        frnt = rear = NULL;
    }
};
void insrt(int d)
{
    Node *newNode=new Node(d);
    newNode->data=d;
    newNode->next=NULL;
    if(rear==NULL)
    {
        frnt=rear=newNode;
        rear->next=frnt;
    }
    else
    {
        rear->next=newNode;
        rear=newNode;
        rear->next=frnt;
    }
}
void del()
{
    Node *tmp;
    tmp=frnt;
    if(frnt==NULL && rear==NULL)
    {
        cout<<"underflow";
    }
    //if only one node
    else if(frnt==rear)
    {
        frnt=rear=NULL;
        delete tmp;
    }
    else
    {
        frnt=frnt->next;
        rear->next=frnt;
        delete tmp;
    }
}
void display()
{
    Node *tmp;
    tmp=frnt;
    if(frnt==NULL && rear==NULL)
    {
        cout<<"Queue is empty";
    }
    else
    {
        while(tmp->next!=frnt)
        {
            cout<<tmp->data<<"\t";
            tmp=tmp->next;
        }
        cout<<tmp->data;
    }
}
int peek()
{
    if(frnt==NULL && rear==NULL)
    {
        return 0;
    }
    else
    {
        return frnt->data;
    }
}
int main()
{
    insrt(10);
    insrt(90);
    insrt(78);
    insrt(23);
    insrt(29);
    cout<<"frnt data="<<peek()<<"\n";
    display();
    del();
    cout<<"\n after del\n";
    display();
}
