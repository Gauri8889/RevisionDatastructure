#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<int,string>mp;
    map<int,int>mp2;
    mp.insert({101,"rohit"});
    mp.insert({104,"rohit"});
    mp.insert({102,"tini"});
    mp.insert({103,"john"});
    mp.insert({105,"honey"});
    mp.insert(make_pair(109,"ravi"));
    mp.erase(104);
    auto p=mp.find(110);

    mp[107]="honey";
    mp2[201]=22;
    mp2[203];
      for(auto p:mp)
      {
          cout<<p.first<<":"<<p.second<<"\n";
      }

}
