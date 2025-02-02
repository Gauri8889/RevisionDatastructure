#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main()
{
    unordered_map<string,int>mp;
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

