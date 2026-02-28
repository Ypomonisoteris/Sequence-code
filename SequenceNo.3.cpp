#include <iostream>
using namespace std;

int main() {
    float x, y, sum, diff, prod, quot;

    cout << "Input the value of x: ";
    cin >> x;
    cout << "Input the value of y: ";
    cin >> y;

    sum = x + y; // Add x and y
    diff = x - y; // Minus x and y
    prod = x * y; // Multiply x and y
    quot = x / y; // Divide x and y

    cout << "sum = " << sum << endl;
    cout << "difference = " << diff << endl;
    cout << "product = " << prod << endl;
    cout << "quotient = " << quot << endl;
    return 0; 
}