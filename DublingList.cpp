#include<iostream>
using namespace std;
#include<list>
int main()
{
    list<int>lst;
    lst.push_front(10);
    lst.push_front(2);
    for(auto p:lst)
    {
        cout<<p<<"\t";
    }
    lst.push_back(3);
    lst.push_front(77);
    cout<<"\n";
    for(auto p:lst)
    {
        cout<<p<<"\t";
    }
    lst.pop_back();
    cout<<"\n";
    for(auto p:lst)
    {
        cout<<p<<"\t";
    }
    lst.pop_front();
    cout<<"\n";
    for(auto p:lst)
    {
        cout<<p<<"\t";
    }
}
