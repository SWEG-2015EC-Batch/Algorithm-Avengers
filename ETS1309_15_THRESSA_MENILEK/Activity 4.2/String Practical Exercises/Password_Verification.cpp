#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char pass[20] = "password123"; // Store the password in a character array

    char input[20]; // Declare a character array to store user input
    cout << "Enter the password: ";
    cin >> input; // Read user input

    if (strcmp(pass, input) == 0) { // Compare the two strings
        cout << "Access granted." << endl;
    }
    else {
        cout << "Access denied." << endl;
    }

    return 0;
}
