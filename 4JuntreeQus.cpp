#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *left,*right;
    node(int v)
    {
        data=v;
        left=NULL;
        right=NULL;
    }
};
int main()
{
    node *root= new node(10);
    root->left=new node(20);
    root->right=new node(30);
    cout<<"preorder\n";
    cout<<root->data<<","<<root->left->data<<","<<root->right->data;
    cout<<"\ninorder\n";
    cout<<root->left->data<<","<<root->data<<","<<root->right->data;
cout<<"postnorder\n";
    cout<<root->left->data<<","<<root->right->data<<","<<root->data;

}
