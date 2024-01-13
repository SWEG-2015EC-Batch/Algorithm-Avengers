#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int numbers[size];
    int count = 0;

    // Read numbers into the array
    while (count < size) {
        int num;
        cout << "Enter a number (or -1 to stop): ";
        cin >> num;

        if (num == -1) {
            break;
        }

        numbers[count] = num;
        count++;
    }

    // Print even numbers in reverse order
    cout << "Even numbers (in reverse order): ";
    for (int i = count-1; i >= 0; i--) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
