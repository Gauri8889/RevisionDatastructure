#include<iostream>
using namespace std;
#include<map>
int main()
{
    map<int,int>mp;
    int n1,n2;
    cout<<"enter value\n";
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cout<<"enter value\n";
        cin>>n2;
        mp[n2]++;
    }



}

