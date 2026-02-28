#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    a = 10;
    b = 5;

    temp = a; // Store value of a in temp
    a = b; // Assign value of b to a
    b = temp; // Assign temp (original a) to b

    cout << "After swapping: a = " << a << ", b = " << b;
    return 0;
}