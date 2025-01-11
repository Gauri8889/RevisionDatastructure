#include<iostream>
using namespace std;
#include<vector>
#include<tuple>
int main()
{
    vector<tuple<int,string,int,int>>v;
    int roll,age,mob,n;
    string nm;
    cout<<"\n how many record\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"rollno,name,age,mobile no\n";
        cin>>roll>>nm>>age>>mob;
        v.push_back({roll,nm,age,mob});
    }
    cout<<"\n Record are\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<"Roll="<<get<0>(v[i])<<"\t";
         cout<<"name="<<get<1>(v[i])<<"\t";
          cout<<"Age="<<get<2>(v[i])<<"\t";
           cout<<"Mobile="<<get<3>(v[i])<<"\n";
    }
}
