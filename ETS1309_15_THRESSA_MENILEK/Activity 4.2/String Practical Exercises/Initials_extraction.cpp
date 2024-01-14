#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, middle, last; // Declare variables to store the names

    cout << "Enter your first name: ";
    cin >> first; // Read the first name

    cout << "Enter your middle name: ";
    cin >> middle; // Read the middle name

    cout << "Enter your last name: ";
    cin >> last; // Read the last name

    cout << "Your initials are: " << first[0] << middle[0] << last[0] << endl; // Print the initials

    return 0;
}
