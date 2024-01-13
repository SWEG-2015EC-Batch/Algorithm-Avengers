#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int NUM_STUDENTS;
    cout<<"Enter number of students";
    cin>>NUM_STUDENTS;
    int marks[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter total mark for student " << i+1 << ": ";
        cin >> marks[i];
    }

    cout << setw(10) << "Student" << setw(10) << "Mark" << setw(15) << "Score Level" << endl;
    cout << setw(10) << "-------" << setw(10) << "----" << setw(15) << "-----------" << endl;

    for (int i = 0; i < NUM_STUDENTS; i++) {
        string level;
        if (marks[i] >= 80) {
            level = "Excellent";
        } else if (marks[i] >= 60) {
            level = "Very Good";
        } else if (marks[i] >= 50) {
            level = "Fair";
        } else if (marks[i] >= 40) {
            level = "Poor";
        } else {
            level = "Fail";
        }

        cout << setw(10) << i+1 << setw(10) << marks[i] << setw(15) << level << endl;
    }

    return 0;
}
