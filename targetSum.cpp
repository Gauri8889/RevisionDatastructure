#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//find out the given string is paragram or not?
//input s="welcome"
//output="false"
//inputs"a-z"
//output=true
// find the max sum of given window size?
//input v={1,2,3,4,5,6},w=3
//output : 15
void targetsum(vector<int>&v,int k)
{
    map<int,int>map;
    int s,t;
    for(int i=0;i<v.size();i++)
    {
        s=v[i];
        t=k-s;
        if(mp.find(t)!=mp.end())
        {
            cout<<t<<","<<v[i]<<"\n";
        }
        mp[s]=i;
    }
}
int main()
{
    vector<int>v{2,4,3,6,1,9};
    int k=5;
    targetsum(v,k);
}

