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

  // a more efficient way to print it      
        
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() 
    {
    string str = "ABCDEFGHJ";
    int n = str.size()-1;
    for (int i = n; i>=-n; --i) {
        int a = abs(i);
        for (int j = n; j>=-n; --j){
            int b = abs(j);
            if (b>=a)
                cout<<str[j>0?n-j:n+j]<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
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
