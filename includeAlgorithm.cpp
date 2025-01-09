#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
#include<algorithm>
int main()
{
    vector<int>v {30,40,36,64,68,79};
    sort(v.begin(),v.end(),less<int>());//ascending order
    sort(v.begin(),v.end(),greater<int>());//descending order
    vector<int>v2{100,430,456};
    v.swap(v2);
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    reverse(v2.begin(),v2.end());
    cout<<"\n data of v1\n";
    for(auto p:v2)
    {
        cout<<p<<"\t";
    }
}
