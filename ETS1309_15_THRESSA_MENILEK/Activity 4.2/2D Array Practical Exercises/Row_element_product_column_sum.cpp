#include <iostream>
using namespace std;
int main() {
  int ROWS, COLS;
  cout<<"Enter the number of rows: ";
  cin>>ROWS;
  cout<<"Enter the number of columns: ";
  cin>>COLS;

  int arr[ROWS][COLS];

  // read in values for array
  cout << "Enter values for array:" << endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cin >> arr[i][j];
    }
  }

  // calculate multiplication of row elements and sum of column elements
  int rowProduct, colSum;
  for (int i = 0; i < ROWS; i++) {
    rowProduct = 1;
    for (int j = 0; j < COLS; j++) {
      rowProduct *= arr[i][j];
    }
    cout << "Product of elements in row " << i+1 << ": " << rowProduct << endl;
  }

  for (int j = 0; j < COLS; j++) {
    colSum = 0;
    for (int i = 0; i < ROWS; i++) {
      colSum += arr[i][j];
    }
    cout << "Sum of elements in column " << j+1 << ": " << colSum << endl;
  }

  return 0;
}
