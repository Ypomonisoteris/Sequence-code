#include <iostream>
using namespace std;

int main() {
    float diameter, radius, area, circumference;

    cout << "Input Diameter: ";
    cin >> diameter;

    radius = diameter / 2;
    area = 3.1416 * radius * radius;
    circumference = 3.1416 * diameter;

    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference;
    return 0;
}