#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // If the element is not found
    return -1;
}

int main() {
    vector<int> arr = { -1, 0, 3, 5, 9, 12 };
    int target = 9;

    int index = binarySearch(arr, target);

    if (index != -1) {
        cout << "Element is present at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
