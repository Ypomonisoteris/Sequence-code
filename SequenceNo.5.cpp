#include <iostream>
#include <string>
using namespace std;

int main() {
    int salesman_number; // int for whole number
    string salesman_name; // string for letters
    float unit_sold, unit_price, total_sales; // float for decimals

    cout << "Input Salesman Number: ";
    cin >> salesman_number;
    cout << "Input Salesman Name: ";
    cin >> salesman_name;
    cout << "Input Unit Sold: ";
    cin >> unit_sold;
    cout << "Input Unit Price: ";
    cin >> unit_price;

    total_sales = unit_sold * unit_price;

    cout << "Total Sales: " << total_sales;
    return 0;
}