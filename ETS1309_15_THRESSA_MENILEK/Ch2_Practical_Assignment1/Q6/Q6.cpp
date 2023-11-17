#include <iostream>
using namespace std;

int main() {
    const int transmissionSpeed = 960; // characters per second
    long long int fileSize; // in bytes

    // Read file size from the user
    cout << "Enter the file size in bytes: ";
    cin >> fileSize;

    // Calculate the number of characters in the file
    long long int numCharacters = fileSize;

    // Calculate the time to transmit the file
    double timeInSeconds = static_cast<double>(numCharacters) / transmissionSpeed;
    int hours = timeInSeconds / 3600;
    int minutes = (timeInSeconds - (hours * 3600)) / 60;
    int seconds = timeInSeconds - (hours * 3600) - (minutes * 60);

    // Display the time to transmit the file
    cout << "It will take " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds to transmit the file." << endl;

    return 0;
}
