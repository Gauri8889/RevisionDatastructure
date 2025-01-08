#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int>p;
    p.push_back(12);
    p.push_back(4);
    p.push_back(33);
    p.push_back(400);
    cout<<p.size()<<"\n";
    cout<<p.capacity();
}
