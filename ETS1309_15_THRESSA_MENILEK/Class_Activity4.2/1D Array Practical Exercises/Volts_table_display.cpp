#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << setw(10) << "Volts" << setw(10) << "Volts" << setw(10) << "Volts" << endl;
    cout << setw(10) << "--------" << setw(10) << "--------" << setw(10) << "--------" << endl;

    for (int i = 0; i < 9; i+=3) {
        cout << setw(10) << volts[i] << setw(10) << volts[i+1] << setw(10) << volts[i+2] << endl;
    }

    return 0;
}
