#include<iostream>
using namespace std;
class node// class is a user define class
{
    public:int data;
    node *nxt ;//wild pointer
    node(int v)
    {
        data=v;
        nxt=NULL;//nullPointer
        cout<<"Assigned";
    }
};

int main()
{
    node *p=new node(20);
    cout<<p->data;
}
