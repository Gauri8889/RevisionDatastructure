#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main()
{
    vector<int>v {30,40,36,64,68,79};
    cout<<v.max_size()<<"\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    vector<int>::iterator it=v.begin();
    cout<<*it<<"\n";
    //cout<<*(it-3)<<"\n";
    v.insert(it+2,4000);//insert at 2 position
    for(auto p:v)
    {
        cout<<p<<"\n";
    }
    v.erase(it+1);
    cout<<"\n erase\n";
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
}
