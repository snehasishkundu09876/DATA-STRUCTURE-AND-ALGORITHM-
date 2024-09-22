#include <iostream>
using namespace std;

int main() {
    int velocity;
    cout << "Enter the initial velocity: ";
    cin >> velocity;

    int timeTaken = 0;
    while (velocity > 0) {
        velocity = velocity / 2;
        timeTaken += 1;
    }

    cout << "Time taken: " << timeTaken << endl;
    return 0;
}
