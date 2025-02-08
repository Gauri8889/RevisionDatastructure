#include<iostream>
using namespace std;
void rec(int n)
{
    if(n==0)
    {
        return;
    }
    //rec(n-1)//tail recurtion
    cout<<n<<"\t";
    rec(n-1);//head
}
int main()
{
    int n;
    cout<<"enter any no\n";
    cin>>n;
    rec(n);
}
