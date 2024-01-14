#include <iostream>
#include <string>
using namespace std;
int main() {
    string answer_key = "ABCDABCDAB"; // Store the answer key as a string
    string student_answer; // Declare a variable to store the student's answer
    int score = 0; // Initialize the score to zero

    cout << "Enter your answers (10 characters): ";
    cin >> student_answer; // Read the student's answer

    cout << "Question\tAnswer\tYour Answer" << endl; // Print the table header

    for (int i = 0; i < 10; i++) { // Loop through each question
        cout << i+1 << "\t\t" << answer_key[i] << "\t" << student_answer[i] << endl; // Print the question number, correct answer, and student's answer
        if (answer_key[i] == student_answer[i]) { // Check if the student's answer is correct
            score++; // Increment the score if the answer is correct
        }
    }

    cout << "Your score is: " << score << "/10" << endl; // Print the final score

    return 0;
}
