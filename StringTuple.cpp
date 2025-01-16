#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<tuple>
int main()
{
    tuple<int,string,int,int>td;
    int,r,a,m;
    string nm;
    cout<<"rollno,name,age,mobile no\n";
    cin>>r>>nm>>a>>m;
    tp=make_tuple(r,nm,a,m);
    cout<<"rollno="<<get<0>(tp)<<"\n";
     cout<<"name="<<get<1>(tp)<<"\n";
      cout<<"age="<<get<2>(tp)<<"\n";
       cout<<"mobile="<<get<3>(tp)<<"\n";
}
