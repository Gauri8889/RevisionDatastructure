
#include <iostream>
using namespace std;
#include <vector>
#include <set>

std::vector<int> removeDuplicates(const std::vector<int>& input) {
    std::set<int> seen;
    std::vector<int> result;

    for (int num : input) {
        if (seen.find(num) == seen.end()) {  // If num is not in the set
            seen.insert(num);  // Add num to the set
            result.push_back(num);  // Add num to the result vector
        }
    }

    return result;
}

int main() {
    std::vector<int> input = {5, 2, 5, 1, 2, 9, 3};

    std::vector<int> output = removeDuplicates(input);

    // Print the result
    std::cout << "Output: [";
    for (size_t i = 0; i < output.size(); ++i) {
        std::cout << output[i];
        if (i < output.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}

