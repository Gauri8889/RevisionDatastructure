#include<iostream>
using namespace std;
#include<vector>
#include<forward_list>
#include<algorithm>
int main()
{
   forward_list<int>f;
   f.push_front(10);
    f.push_front(45);
     f.push_front(23);
      f.push_front(17);
       f.push_front(6);
       f.remove_if([](int x){return x>10;});
       for(auto p:f)
       {
           cout<<p<<"\t";
       }
}


