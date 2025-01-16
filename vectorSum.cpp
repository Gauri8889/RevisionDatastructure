//WAP to display the sum of the values of a vectoter
/*#include<iostream>
using namespace std;
#include<vector>
void sum(vector<int>&v1,vector<int>&v2)
{
    int sum(const vector<int>& vec) {
    int totalSum = 0;
    for (int num : vec) {
        totalSum += num;
    }
    return totalSum;
}
}
    int main()
    {
        vector<int>v1[3,1,2,4];
        vector<int>v2[2,1,6];
        sum(v1,v2);
    }
}
*/
#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the sum of the elements in a vector
int sum(const vector<int>& vec) {
    int totalSum = 0;
    for (int num : vec) {
        totalSum += num;
    }
    return totalSum;
}

int main() {
    // Initializing vectors v1 and v2
    vector<int> v1 = {3, 1, 2, 4};
    vector<int> v2 = {2, 1, 6};

    // Calculate the sum of both vectors
    int sumV1 = sum(v1);
    int sumV2 = sum(v2);

    // Print the sum of each vector
    cout << "Sum of v1: " << sumV1 << endl;
    cout << "Sum of v2: " << sumV2 << endl;

    // Print the total sum of both vectors
    cout << "Total sum (v1 + v2): " << sumV1 + sumV2 << endl;

    return 0;
}
