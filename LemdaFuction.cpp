//Lambda function:Anonymous function
//syntax:[] (datatype var){return value;}

#include<iostream>
using namespace std;
#include<vector>
#include<forward_list>
int main()
{
    cout<<[] (int a,int b){return a+b;} (4,30)<<"\n";
     cout<<[] (int a){return a>=18;} (4)<<"\n";
      auto p=[] (int a,int b){return a+b;} ;
      cout<<p(4,2)<<"\n";
}
