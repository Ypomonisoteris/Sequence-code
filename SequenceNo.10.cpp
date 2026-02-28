#include <iostream>
using namespace std;

int main() {
    float base, height, side1, side2, side3, area, perimeter;

    cout << "Input Base: ";
    cin >> base;
    cout << "Input height: ";
    cin >> height;
    cout << "Input Side 1: ";
    cin >> side1;
    cout << "Input Side 2: ";
    cin >> side2;
    cout << "Input Side 3: ";
    cin >> side3;
    
    area = (base * height) / 2;
    perimeter = side1 + side2 + side3;

    cout << "The area is: " << area << endl;
    cout << "The perimeter is: " << perimeter;
    return 0;
}