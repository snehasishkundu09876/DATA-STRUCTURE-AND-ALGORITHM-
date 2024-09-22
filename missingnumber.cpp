#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int xorArray = arr[0];  // XOR of all array elements
    int xorFull = 1;        // XOR of all numbers from 1 to n+1

    // XOR all the elements in the array
    for (int i = 1; i < n; i++) {
        xorArray = xorArray ^ arr[i];
    }

    // XOR all the numbers from 1 to n+1
    for (int i = 2; i <= n + 1; i++) {
        xorFull = xorFull ^ i;
    }

    // XOR of xorArray and xorFull gives the missing number
    return xorArray ^ xorFull;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};  // Array missing one number
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in the array

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
