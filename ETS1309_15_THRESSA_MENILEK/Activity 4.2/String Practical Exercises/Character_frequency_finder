#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (size_t i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(c)) {
            digits++;
        } else if (c != ' ') { // Assuming space as the only whitespace character
            special++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
