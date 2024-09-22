#include <iostream>
using namespace std;

bool search(int arr[], int size, int index, int target) {
    // Base condition
    if (index >= size) {
        return false;
    }

    // If the current element matches the target
    if (arr[index] == target) {
        return true;
    }

    // Recursive call to check the next element
    return search(arr, size, index + 1, target);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 10;

    // Call the search function
    bool found = search(arr, size, 0, target);

    if (found) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
