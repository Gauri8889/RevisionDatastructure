#include<iostream>
using namespace std;
#include<map>

int main()
{
    map<string,int>mp;
    int n;
    string name;
    cout<<"how many days\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\n enter name\n";
        cin>>name;
        mp[name]++;
    }
    cout<<"counting of appearance\n";
    for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";
    }
}
//type of set
//1 unorderset
//2 multiset
//3 orederset
