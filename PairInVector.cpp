#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<pair<int,string>>v;//One dimentional vector
    int record,rollno;
    string name;
    cout<<"enter how many records\n";
    cin>>record;
    for(int i=1;i<=record;i++)
    {
        cout<<"\n enter rollno\n";
        cin>>rollno;
        cout<<"\n enter name\n";
        cin>>name;
        v.push_back({rollno,name});
        v.push_back(make_pair(roll,name));
    }
    cout<<"\n stored data are\n";
    for(int i=0;i<record;i++)
    {
        cout<<v[i].first<<","<<v[i].second<<"\n";
    }
}
