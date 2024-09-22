#include <iostream>
using namespace std;

int calculateSum(int n) {
    // Base condition
    if (n == 1) {
        return 1;
    }

    // Recursive call to calculate the sum
    return n + calculateSum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int finalSum = calculateSum(n);
    cout << "The sum of numbers from 1 to " << n << " is: " << finalSum << endl;

    return 0;
}
