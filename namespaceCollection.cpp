#include<iostream>
using namespace std;
namespace Boss
{
    class student
    {
        public:void study()
        {
            cout<<"\n cybrom\n";
        }
        public:void enjoy()
        {
            cout<<"\n holiday";
        }
    }faculty;
}
using namespace Boss;
int main()
{
faculty.study();
faculty.enjoy();
}
