#include<iostream>
using namespace std;
#include<forward_list>
#include<algorithm>
int main()
{
    forward_list<int>f1{3,5,1,2,6,8};
    for(auto p:f1)
    {
        cout<<p<<"\t";
    }
    f1.reverse();
    cout<<"after reverse \n";
    for(auto p:f1)
    {
        cout<<p<<"\t";
    }
    forward_list<int>f2;
    f2.push_front(200);
       f2.push_front(100);
          f2.push_front(300);
             f2.push_front(600);
                f2.push_front(500);
                cout<<"\n";
                for(auto p:f2)
                {
                    cout<<p<<"\n";
                }
                f2.pop_front();
                cout<<"\n after delete \n";
                for(auto p:f2)
                {
                    cout<<p<<"\n";
                }
                forward_list<int>f3;
                f3.push_front(12);
       f3.push_front(1);
          f3.push_front(12);
             f3.push_front(10);

              f3.push_front(1);
               f3.push_front(11);
                cout<<"\n f3 data\n";
                 for(auto p:f3)
                {
                    cout<<p<<"\n";
                }
                f3.sort();
                 for(auto p:f3)
                {
                    cout<<p<<"\n";
                }
                f3.unique();
                cout<<"\n unique data\n";
                 for(auto p:f3)
                {
                    cout<<p<<"\n";
                }

}
