#include <iostream>
#include <string>
#include<iomanip>
using namespace std;

const int MAX_CUSTOMERS = 100;

struct Customer {
    string name;
    char sex;
    string address;
    int code;
    double totalSales;
    int numPurchases;
};

int main() {
    Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;

cout<<" ***** WELCOME ****** "<<endl;
    while (true) {
        cout << "Menu Options: \n"
                "1. Add new customer \n"
                "2. Search for a customer \n"
                "3. Record a purchase \n"
                "4. End of day \n"
                "5. Exit "<<endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, address;
                char sex;

                cout << "Enter customer name: ";
                cin >> name;

                cout << "Enter customer sex (M/F): ";
                cin >> sex;
                if (sex=='m'||sex=='f'||sex=='M'||sex=='F'){

                cout << "Enter customer address: ";
                cin >> address;

                }
                else{
                    cout<<" please enter in the appropriate format ( m or f ) "<<endl;
                    return 0;
                }

                bool isNewCustomer = true;
                for (int i = 0; i < numCustomers; i++) {
                    if (customers[i].name == name) {
                        isNewCustomer = false;
                        break;
                    }
                }

                if (isNewCustomer) {
                    customers[numCustomers].name = name;
                    customers[numCustomers].sex = sex;
                    customers[numCustomers].address = address;
                    customers[numCustomers].code = numCustomers + 1;
                    customers[numCustomers].totalSales = 0.0;
                    customers[numCustomers].numPurchases = 0;
                    numCustomers++;
                }
                break;
            }
            case 2: {
                cout << "Enter customer ID or name to search: "<<endl;
                string searchName;
                cin >> searchName;

                bool found = false;
                for (int i = 0; i < numCustomers; i++) {
                    if (customers[i].name == searchName || to_string(customers[i].code) == searchName) {
                        found = true;
                        cout << "Customer Details:\n"
                             << "Name:  " << customers[i].name << "\n"
                             << "Sex:  " << customers[i].sex << "\n"
                             << "Address:  " << customers[i].address << "\n"
                             << "Customer Number:  " << customers[i].code << endl;
                        break;
                    }
                }
                if (!found) {
                    cout << "Customer not found." << endl;
                }
                break;
            }
            case 3: {
                int customerCode, purchaseAmount;
                cout << "Enter customer code: ";
                cin >> customerCode;
                cout << "Enter purchase amount: ";
                cin >> purchaseAmount;
                for (int i = 0; i < numCustomers; i++) {
                    if (customers[i].code == customerCode) {
                        customers[i].totalSales += purchaseAmount;
                        customers[i].numPurchases++;
                        break;
                    }
                }
                break;
            }
            case 4: {

            cout<<" ***** please choose Report format ***** \n"
                  " 1. Detailed report \n"
                  " 2. Summary report \n"
                  " 3. exit"<<endl;

            int choice2;
            cin>>choice2;

            switch(choice2){
            case 1:{

                cout << "........Detailed Report........\n";
                cout << left<<setw(10) << "Customer Name: "
                    << left<<setw(10)  << "Sex:  "
                    << left<<setw(10)  << "Address:  "
                    << left<<setw(10)  << "Customer Code:  "
                    << left<<setw(10)  << "Total Sales:  "
                    << left<<setw(10)  << "Average Sales:  "<<endl;
                for (int i = 0; i < numCustomers; i++) {
                    cout << left<<setw(15)<< customers[i].name
                         << left<<setw(15)<< customers[i].sex
                         << left<<setw(10)<< customers[i].address
                         << left<<setw(15) << customers[i].code
                         << left<<setw(15) << customers[i].totalSales
                         << left<<setw(15) << (customers[i].totalSales / customers[i].numPurchases) << endl;
                }
                break;
            }
            case 2: {
                double totalSales = 0.0;
                int totalItemsSold = 0;

                for (int i = 0; i < numCustomers; i++) {
                    totalSales += customers[i].totalSales;
                    totalItemsSold += customers[i].numPurchases;
                }

                cout << "........Summary Report........\n"
                     << left<<setw(10) << "Number of Customers "
                     << left<<setw(10) << "Total Sales "
                     << left<<setw(10) << "Total Items Sold  "<<endl;

                cout<< left<<setw(20) << numCustomers
                    << left<<setw(20) << totalSales
                    << left<<setw(20) << totalItemsSold << endl;
                break;
            }
            case 3:{

                return 0;

            }
            }
            }
            case 5: {
                return 0;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
    
}
