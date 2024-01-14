#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char program1[] = "Ye beteseb chewata"; // Initialize at declaration
    char program2[20]; // Declare second string

    strcpy(program2, "Seifu on ebs"); // Initialize with strcpy()

    cout << "My two favorite TV programs are: " << endl;
    cout << program1 << endl;
    cout << program2 << endl;

    return 0;
}
