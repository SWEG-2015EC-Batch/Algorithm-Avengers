#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    // Convert to uppercase
    for (int i = 0; i < input.length(); i++) {
        input[i] = toupper(input[i]);
    }
    cout << "Uppercase: " << input << endl;

    // Convert to lowercase
    for (int i = 0; i < input.length(); i++) {
        input[i] = tolower(input[i]);
    }
    cout << "Lowercase: " << input << endl;

    return 0;
}
