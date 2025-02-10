#include<iostream.
using namespace std;
class node
{
    public:int data;
    node *n;
    node(int v)
    {
        data=n;
        n=NULL;
    }
};
class myque
{
    node *frnt,*rear;
    public:myque()
    {
        frnt=NULL;
        rear=NULL;
    }
    void qpush(node *r,int v)
    {
        node *n=new node(v);
        if(frnt==NULL)
        {
            frnt=n;
            rear=n;
        }
    }
    rear->nxt=n;
    rear=n;
};
int qpeek()
{
    if(frnt==NULL)
    {
        cout<<"There is no data";
    }
    return frnt->data;
}
int main()
{
    myque q;
    q.qpush(10);
    q.qpush();
    q.qpush();
    q.qpush();
}
