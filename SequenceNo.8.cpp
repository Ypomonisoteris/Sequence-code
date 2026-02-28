#include <iostream>
using namespace std;

int main() {
    int length, width, area, perimeter;

    cout << "Input Length: ";
    cin >> length;
    cout << "Input Width: ";
    cin >> width;

    area = length * width;
    perimeter = 2 * (length + width);

    cout << "The area is: " << area << endl;
    cout << "The perimeter is: " << perimeter;
    return 0;
}