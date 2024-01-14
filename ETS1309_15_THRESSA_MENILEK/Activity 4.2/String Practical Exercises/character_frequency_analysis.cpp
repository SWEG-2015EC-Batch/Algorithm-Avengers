#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> frequency;

    // Count the frequency of each character in the string
    for (size_t i = 0; i < str.length(); ++i) {
        char c = str[i];
        frequency[c]++;
    }

    char maxChar = '\0';
    char minChar = '\0';
    int maxFreq = 0;
    int minFreq = INT_MAX;

    // Finding the character with the largest and smallest frequency
    for (map<char, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
            maxChar = it->first;
        }
        if (it->second < minFreq) {
            minFreq = it->second;
            minChar = it->first;
        }
    }

    cout << "Character with the largest frequency: " << maxChar << " (" << maxFreq << " times)" << endl;
    cout << "Character with the smallest frequency: " << minChar << " (" << minFreq << " times)" << endl;

    return 0;
}
