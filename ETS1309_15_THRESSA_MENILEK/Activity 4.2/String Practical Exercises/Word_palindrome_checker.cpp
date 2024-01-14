#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true;
    int length = word.length();
    for (int i = 0; i < length/2; i++) {
        if (word[i] != word[length-1-i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word " << word << " is a palindrome." << endl;
    } else {
        cout << "The word " << word << " is not a palindrome." << endl;
    }

    return 0;
}
