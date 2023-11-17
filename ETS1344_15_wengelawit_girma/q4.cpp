#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter the value of x: ";
    cin >> x;
    
    cout << "Enter the value of y: ";
    cin >> y;
    
    int result = pow(x, y);
    
    cout << "The result of " << x << " raised to the power of " << y << " is: " << result << std::endl;
    
    return 0;
}
