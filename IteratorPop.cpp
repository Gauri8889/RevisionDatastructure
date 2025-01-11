#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int ,5 >arr{3,1,5,3,6};

    for(int i=0;i<arr.size();i++)
    {
        //cout<<arr.at(i)<<"\t";
        cout<<arr[i]<<"\n";
    }
    cout<<arr.front()<<"\n";
    cout<<arr.back();
}
