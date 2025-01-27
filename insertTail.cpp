#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *nxt;
    public:node(int v)
    {
        data=v;
        nxt=NULL;
    }
};
int insert_tail(node *&h,int v)
{
    node *n=new node(v);
    if(h==NULL)
    {
        h=n;
        return 0;
    }
    node *tmp=h;
    while(tmp->nxt!=NULL)
    {
        tmp=tmp->nxt;
    }
    tmp->nxt=n;
}
void show(node *h)
{
    node *tmp=h;
    while(tmp!=NULL)
    {
        cout<<tmp->data<<"\t";
        tmp=tmp->nxt;
    }
}
int main()
{
    node *h=NULL;
    insert_tail(h,20);
    insert_tail(h,2);
    insert_tail(h,10);
    insert_tail(h,8);
    show(h);
}
