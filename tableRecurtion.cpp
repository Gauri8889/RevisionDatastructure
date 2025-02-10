#include<iostream>
using namespace std;
int table(int n,int c)
{
    if(c>10)//base condition
    {
        return 1;
    }
    cout<<n*c<<"\t";
    return table(n,c+1);
}
int main()
{
    int n;
    cout<<"enter any no\n";
    cin>>n;
    table(n,1);
}

