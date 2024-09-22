#include <iostream>
#include <vector>
#include <utility>  // For std::pair

using namespace std;

void findPairsWithSumInArray(int arr[], int size, vector<pair<int, int>>& result) { // Pass by reference
    // Iterate through all pairs in the array
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) { // Start from i+1 to avoid pairing with itself
            for (int k = 0; k < size; k++) { // Check for sum match in the array
                if (arr[i] + arr[j] == arr[k]) {
                    result.push_back(make_pair(arr[i], arr[j])); // Store the pair in result
                }
            }
        }
    }

    // Output the found pairs
    for (const auto& nums : result) {
        cout << nums.first << " " << nums.second << endl;
    }
}

int main() {
    int arr[] = {1, 3, 2, 6, 9, 8, 5, 10};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    vector<pair<int, int>> result; // Vector to store result pairs

    findPairsWithSumInArray(arr, size, result);

    return 0;
}
