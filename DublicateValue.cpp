#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>v{1,3,1,4,2,5};
    sort(v.begin()v.end());
    int x=0;
    for(int i=1;i<v;v.size();i++)
    {
        if(v[x+1]!=v[i])
        {
            v[x]=v[i];
            x++;
        }
    }
    for(int i=0;i<x;i++)
    {
        cout<<v[i]<<"\t";
    }
}
