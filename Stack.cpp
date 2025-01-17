#include<iostream>
using namespace std;
#include<stack>
int main()
{
 stack<int>st;
 st.push(10);
 st.push(12);
 st.push(1);
 st.push(3);
 st.push(15);
 st.pop();
 cout<<st.top()<<"\n";
 while(!st.empty())
 {
     cout<<st.top()<<"\n";
     st.pop();
 }


}
