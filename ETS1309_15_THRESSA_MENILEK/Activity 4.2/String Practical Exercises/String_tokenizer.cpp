#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);

    stringstream ss(line);
    string token;
    while (getline(ss, token, ' ')) {
        cout << token << endl;
    }

    return 0;
}
