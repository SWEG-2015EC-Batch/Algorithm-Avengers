#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int n) {
    int reversedNumber = 0;
    while (n > 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n = n / 10;
    }
    return reversedNumber;
}

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int productOfEvenDigits(int n) {
    int product = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        n = n / 10;
    }
    return product;
}

int getFirstDigit(int n) {
    while (n >= 10) {
        n = n / 10;
    }
    return n;
}

int getLastDigit(int n) {
    return n % 10;
}

int sumOfFirstAndLastDigit(int n) {
    return getFirstDigit(n) + getLastDigit(n);
}

int swapFirstAndLastDigit(int n) {
    int first = getFirstDigit(n);
    int last = getLastDigit(n);
    int digits = countDigits(n) - 2;
    n = n - (first * pow(10, digits)) - last + (last * pow(10, digits)) + first;
    return n;
}

bool isPalindrome(int n) {
    return (n == reverseNumber(n));
}

int getDigitFrequency(int n, int digit) {
    int count = 0;
    while (n > 0) {
        if (n % 10 == digit) {
            count++;
        }
        n = n / 10;
    }
    
    
    return count;
}

bool isArmstrong(int n) {
    int originalNumber = n;
    int numberOfDigits = countDigits(n);
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, numberOfDigits);
        n = n / 10;
    }
    return (sum == originalNumber);
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

bool isStrong(int n) {
    int originalNumber = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n = n / 10;
    }
    return (sum == originalNumber);
}

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n);
}

void printDigitFrequency(int n) {
    int freq[10] = {0}; // initialize frequency array with 0s
    while(n > 0) {
        int digit = n % 10; // get last digit
        freq[digit]++; // increment frequency of that digit
        n /= 10; // remove last digit
    }
    cout << "Digit\tFrequency" << endl;
    for(int i = 0; i < 10; i++) {
        if(freq[i] > 0) {
            cout << i << "\t" << freq[i] << endl;
        }
    }
}

int main() {
    int choice, num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Select an operation to perform:" << endl;
    cout << "1. Print the reverse of the number" << endl;
    cout << "2. Count the number of digits in the given number" << endl;
    cout << "3. Find the sum of the digits of the given number" << endl;
    cout << "4. Find the product of even digits of the given number" << endl;
    cout << "5. Print the first and last digit of the number and their sum" << endl;
    cout << "6. Swap the first and last digit of the number" << endl;
    cout << "7. Check if the number is palindrome or not" << endl;
    cout << "8. Find the frequency of each digit in the given integer" << endl;
    cout << "9. Check if the number is Armstrong or not" << endl;
    cout << "10. Check if the number is Strong or not" << endl;
    cout << "11. Check whether the number is Perfect number or not" << endl;
    cout << "Enter your choice (1-11): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Reversed number: " << reverseNumber(num) << endl;
            break;
        case 2:
            cout << "Number of digits: " << countDigits(num) << endl;
            break;
        case 3:
            cout << "Sum of digits: " << sumOfDigits(num) << endl;
            break;
        case 4:
            cout << "Product of even digits: " << productOfEvenDigits(num) << endl;
            break;
        case 5:
            cout << "First digit: " << getFirstDigit(num) << endl;
            cout << "Last digit: " << getLastDigit(num) << endl;
            cout << "Sum of first and last digit: " << sumOfFirstAndLastDigit(num) << endl;
            break;
        case 6:
            cout << "Number after swapping first and last digit: " << swapFirstAndLastDigit(num) << endl;
            break;
        case 7:
            cout << (isPalindrome(num) ? "Palindrome" : "Not a Palindrome") << endl;
            break;
        case 8:
            printDigitFrequency(num);
            break;
        case 9:
            cout << (isArmstrong(num) ? "Armstrong number" : "Not an Armstrong number") << endl;
            break;
        case 10:
            cout << (isStrong(num) ? "Strong number" : "Not a Strong number") << endl;
            break;
        case 11:
            cout << (isPerfect(num) ? "Perfect number" : "Not a Perfect number") << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
    }
    return 0;
}

