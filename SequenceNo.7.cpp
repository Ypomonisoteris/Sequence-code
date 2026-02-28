#include <iostream>
using namespace std;

int main() {
    int num, square, cube;

    cout << "Input Number: ";
    cin >> num;

    square = num * num;
    cube = num * num * num;

    cout << "Square of " << num << " is: " << square << endl;
    cout << "Cube of " << num << " is: " << cube;
    return 0;
}