#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> names;
    int numNames;
    
    cout << "Enter the number of names: ";
    cin >> numNames;
    
    cin.ignore();  // to clear input buffer
    
    for (int i = 0; i < numNames; ++i) {
        string name;
        cout << "Enter name " << i+1 << ": ";
        getline(cin, name);
        names.push_back(name);
    }

    sort(names.begin(), names.end());

    cout << "\nNames in alphabetical order:\n";
    for (size_t i = 0; i < names.size(); ++i) {
        cout << names[i] << endl;
    }

    return 0;
}
