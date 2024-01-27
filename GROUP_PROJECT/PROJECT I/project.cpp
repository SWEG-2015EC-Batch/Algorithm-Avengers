
#include <iostream>
#include <string>

const int MAX_CUSTOMERS = 100;

struct Customer {
    std::string name;
    char sex;
    std::string address;
    int code;
    double totalSales;
    int numPurchases;
};

int main() {
    Customer customers[MAX_CUSTOMERS];
    int numCustomers = 0;

    while (true) {
        std::cout << "Menu Options:\n"
                     "1. Add new customer\n"
                     "2. Search for a customer\n"
                     "3. Record a purchase\n"
                     "4. Generate detailed report\n"
                     "5. Generate summary report\n"
                     "6. Exit\n";
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string name, address;
            char sex;

            std::cout << "Enter customer name: ";
            std::cin >> name;
            std::cout << "Enter customer sex (M/F): ";
            std::cin >> sex;
            std::cout << "Enter customer address: ";
            std::cin >> address;

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
        } else if (choice == 2) {
            std::cout << "Enter customer ID or name to search: ";
            std::string searchName;
            std::cin >> searchName;

            bool found = false;
            for (int i = 0; i < numCustomers; i++) {
                if (customers[i].name == searchName || std::to_string(customers[i].code) == searchName) {
                    found = true;
                    std::cout << "Customer Details:\n"
                                 "Name: " << customers[i].name << "\n"
                                 "Sex: " << customers[i].sex << "\n"
                                 "Address: " << customers[i].address << "\n"
                                 "Customer Number: " << customers[i].code << "\n";
                    break;
                }
            }
            if (!found) {
                std::cout << "Customer not found.\n";
            }
        } else if (choice == 3) {
            int customerCode, purchaseAmount;
            std::cout << "Enter customer code: ";
            std::cin >> customerCode;
            std::cout << "Enter purchase amount: ";
            std::cin >> purchaseAmount;

            for (int i = 0; i < numCustomers; i++) {
                if (customers[i].code == customerCode) {
                    customers[i].totalSales += purchaseAmount;
                    customers[i].numPurchases++;
                    break;
                }
            }
        } else if (choice == 4) {
            std::cout << "Detailed Report:\n";
            for (int i = 0; i < numCustomers; i++) {
                std::cout << "Customer Name: " << customers[i].name << "\n"
                             "Sex: " << customers[i].sex << "\n"
                             "Address: " << customers[i].address << "\n"
                             "Customer Number: " << customers[i].code << "\n"
                             "Total Sales: " << customers[i].totalSales << "\n"
                             "Average Sales: " << (customers[i].totalSales / customers[i].numPurchases) << "\n";
            }
        } else if (choice == 5) {
            double totalSales = 0.0;
            int totalItemsSold = 0;

            for (int i = 0; i < numCustomers; i++) {
                totalSales += customers[i].totalSales;
                totalItemsSold += customers[i].numPurchases;
            }

            std::cout << "Summary Report:\n"
                         "Number of Customers: " << numCustomers << "\n"
                         "Total Sales: " << totalSales << "\n"
                         "Total Items Sold: " << totalItemsSold << "\n";
        } else if (choice == 6) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}



