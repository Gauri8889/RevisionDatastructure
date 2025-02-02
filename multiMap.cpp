#include<iostream>
using namespace std;
#include<map>
#include<unordered_map>
int main()
{
    multimap<string,int>mp;
   mp.insert({"amit",101});
   mp.insert({"amit",108});
   mp.insert({"sumit",107});
   mp.insert({"ravi",108});
    for(auto p:mp)
    {
        cout<<p.first<<"="<<p.second<<"\n";
    }
}

