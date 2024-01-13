#include <iostream>
using namespace std;
int main() {
    int temp[8];
    int total = 0;

    // input eight integers into the array
    for (int i = 0; i < 8; i++) {
        cout << "Enter an integer: ";
        cin >> temp[i];
        total += temp[i];
    }

    // calculate and display the average
    double average = static_cast<double>(total) / 8;
    cout << "The total is: " << total << endl;
    cout << "The average is: " << average << endl;

    return 0;
}
