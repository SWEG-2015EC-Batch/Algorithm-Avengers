#include <iostream>
using namespace std;
int main() {
  int size;
  cout << "Enter the size of the arrays: ";
  cin >> size;

  int array1[size], array2[size];

  // read in values for first array
  cout << "Enter values for first array: ";
  for (int i = 0; i < size; i++) {
    cin >> array1[i];
  }

  // read in values for second array
  cout << "Enter values for second array: ";
  for (int i = 0; i < size; i++) {
    cin >> array2[i];
  }

  // compare arrays
  bool equal = true;
  for (int i = 0; i < size; i++) {
    if (array1[i] != array2[i]) {
      equal = false;
      break;
    }
  }

  // output result
  if (equal) {
    cout << "The arrays are identical." << endl;
  } else {
    cout << "The arrays are not identical." << endl;
  }

  return 0;
}
