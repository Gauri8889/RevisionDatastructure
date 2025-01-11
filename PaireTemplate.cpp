#include<iostream>
using namespace std;
#include<vector>
int main()
{
    pair<int,string>student{102,"honey"};
    int rollno;
    string name;
    cout<<"enter your rollno\n";
    cin>>rollno;
    cout<<"enter ur name\n";
    cin>>name;
    student=make_pair(rollno,name);
    cout<<"Roll no="<<student.first<<"\n";
    cout<<"Name="<<student.second<<"\n";
}
