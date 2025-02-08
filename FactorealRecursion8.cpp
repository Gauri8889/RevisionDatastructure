//WAP to factoreal using recurtion
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n == 1) // base condition
    {
        return 1;
    }
    return n * fact(n - 1); // recursive call
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;

    // Check for edge case when n is 0, since 0! is 1
    if (n == 0) {
        cout << "Factorial of 0 is 1" << endl;
    } else {
        cout << "Factorial of " << n << " is " << fact(n) << endl;
    }

    return 0;
}

