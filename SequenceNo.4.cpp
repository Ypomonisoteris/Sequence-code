#include <iostream>
using namespace std;

int main() {
    float celcius, farenheit;

    cout << "Input the temperature of Celcius: ";
    cin >> celcius;
    
    farenheit = (celcius * 9 / 5) + 32; // Formula of celcius to farenheit

    cout << "Temperature in Farenheit: " << farenheit;
    return 0;
}