//WAP to factoreal using recurtion
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)//base condition
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"enter any no\n";
    cin>>n;
    cout<<fact(n);
}
