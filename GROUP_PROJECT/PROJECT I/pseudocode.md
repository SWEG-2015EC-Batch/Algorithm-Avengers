Initialize the variables:
- customerNames[MAX_CUSTOMERS] // Array to store customer names
- customerSex[MAX_CUSTOMERS]   // Array to store customer sex
- customerAddress[MAX_CUSTOMERS] // Array to store customer addresses
- customerCodes[MAX_CUSTOMERS] // Array to store customer codes
- totalSales[MAX_CUSTOMERS]    // Array to store total sales per customer
- numPurchases[MAX_CUSTOMERS]  // Array to store the number of purchases per customer
- nextCode = 1                 // Next available code for new customers
- numCustomers = 0              // Number of customers

Display menu options:
1. Add new customer
2. Search for a customer
3. Record a purchase
4. end of day
5. Exit

While true:
    Read user's choice

    If choice == 1:
        Read customer name, sex, and address
        Check if the customer is new or existing
        If new, add details to arrays and assign a unique code

    If choice == 2:
        Read customer ID or name to search
        Display customer details if found

    If choice == 3:
        Read customer code and purchase amount
        Record the sale in the corresponding arrays

If choice == 4:
Ask user to choose between 1. detailed report
2.summay report
3.Exit

      If choice==1
 Generate detailed report with customer details, sales, total sales, and average sales per customer

     If choice==2
Generate summary report with the number of customers, total sales, and total items sold

    If choice == 3 ||choice==5:
        Exit the program

