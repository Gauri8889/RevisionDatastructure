#include<iostream>
using namespace std;
#include<string>
int main()
{
   string s={"subh"};
   s="yashwant";
   cout<<s.length()<<"\n";
   string t={"yes"};
   cout<<(s<t)<<"\n";
   char k[10];
   s.copy(k,4,0);
   for(int i=0;i<4;i++)
   cout<<k[i];


}

