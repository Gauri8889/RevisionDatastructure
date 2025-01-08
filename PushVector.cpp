#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>p(5,-9);
    p[0]=70;

    for(auto k:p)
    {
        cout<<k<<"\n";
    }
/*vector<int>p;
    int n,w;
    cout<<"how many records\n";
    cin>>n;//5
    for(int i=0;i<n;i++)
    {
        cout<<"enter value\n";
        cin>>w;
        p.push_back(w);
    }
    for(auto j:p)
    {
        cout<<j<<"\t";
    }*/

}
