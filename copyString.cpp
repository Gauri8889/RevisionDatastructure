#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
    string s="cybrombhopal";
    char c[10];
    s.copy(c,3,3);//(arr,noofelement,position)
    cout<<c<<"\n";
    for(auto k:s)
    {
        cout<<k<<"\t";
    }
    reverse(s.begin(),s.end());
    cout<<"\n after reverse ="<<s<<"\n";
    string t1 ="Phopal";
    string t2 = "Delhi";
    cout<<"t1="<<t1<<"\t"<<"t2="<<t2<<"\n";
    t1.swap(t2);
    cout<<"swap t1="<<t1<<"\t"<<"swap t2="<<t2<<"\n";
}
