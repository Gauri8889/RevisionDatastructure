#include<iostream>
using namespace std;
#include<vector>
#include<forward_list>
#include<algorithm>
int main()
{
    //all_of(),any_of(),none_of():return boolean value karte hai
   vector<int>v{10,30,4,20,6};
  cout<<all_of(v.begin(),v.end(),[](int a){return a>20;});
   cout<<none_of(v.begin(),v.end(),[](int a){return a>20;});
   cout<<any_of(v.begin(),v.end(),[](int a){return a>20;});
}

