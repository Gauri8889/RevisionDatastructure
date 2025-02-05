#include<iostream>
using namespace std;
#include<set>
void pan(string s)
{
    set<char>str(s.begin(),s.end());
    for(int i='a';i<='z';i++)
    {
        if(str.find(i)==str.end())
        {
            cout<<"not panagram";
            return;
        }
    }
    cout<<"panagram";
}
int main()
{
    //string s="quick brown fox jumps over the lazy dog";
    string s="joy";
    pan(s);
}
