#include<iostream>
using namespace std;
#include<deque>
int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(5);
    dq.push_back(2);
    while(!dq.empty())
    {
        cout<<dq.back()<<"\t";
        dq.pop_back();
    }
    cout<<"\n insert from front\n";
    deque<int>dq2;
    dq2.push_front(100);
    dq2.push_front(200);
    dq2.push_front(300);
    dq2.push_front(600);
    while(!dq2.empty())
    {
        cout<<dq2.front()<<"\t";
        dq2.pop_front();
    }
}
