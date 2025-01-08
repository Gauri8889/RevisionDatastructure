#include<iostream>
using namespace std;
#include<string>
int main()
{
   char arr[]={'a','b','c','\0'};
   char p[10];
   cout<<"\n enter name\n";
   cin.get(p,11,'$');//delimeter $,&;
   cout<<"name="<<p;


}


