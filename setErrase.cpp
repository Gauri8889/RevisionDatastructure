#include<iostream>
using namespace std;
#include<map>
#include<set>
int main()
{
    set<string>mp;
   mp.insert("indore");
   mp.insert("bhopal");
   mp.insert("sagar");
   mp.insert("ujjain");
    for(auto p:mp)
    {
        cout<<p<<"\n";

    }
    cout<<"\n";
    cout<<*mp.upper_bound("sager");
}


