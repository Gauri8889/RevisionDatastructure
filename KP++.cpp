#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
#include<algorithm>
int main()
{
    vector<int>v{32,3,4,67,54};
    for(auto &p:v)
    {
        cout<<p++<<"\t";
    }
    for(auto k:v)
    {
        cout<<k<<"\t";
    }
}
