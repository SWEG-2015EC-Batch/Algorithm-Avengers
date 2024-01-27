#include <iostream>
#include <string>
using namespace std;

int main() 
    {
    string str = "ABCDEFGHJ";
    int n = str.size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <=i) {
                cout << str[j]<<" ";
            } else {
                cout << "  ";
            }
        }

        for (int j = n - 1; j >= 0; j--) {
            if (j <= i) {
                cout << str[j]<<" ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (j < i) {
                cout << str[j]<<" ";
            } else {
                cout << "  ";
            }
        }

        for (int j = n - 1; j >= 0; j--) {
            if (j <i) {
                cout << str[j]<<" ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
