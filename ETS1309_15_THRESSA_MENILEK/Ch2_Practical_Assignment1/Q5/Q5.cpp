#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double weeklyWorkingHours, bonusRatePerHour, baseSalary;
    const double pensionRate = 0.05;
    const double taxRate = 0.15;

    // Read input from the user
    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Calculate gross salary, pension amount, tax amount, and net salary
    double bonusPayment = weeklyWorkingHours * bonusRatePerHour;
    double grossSalary = baseSalary + bonusPayment;
    double pensionAmount = grossSalary * pensionRate;
    double taxAmount = grossSalary * taxRate;
    double netSalary = grossSalary - pensionAmount - taxAmount;

    // Display results
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;

    return 0;
}
