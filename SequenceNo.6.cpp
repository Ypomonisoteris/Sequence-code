#include <iostream>
using namespace std;

int main() {
    float prelim, midterm, final, average;

    cout << "Input your prelim score: ";
    cin >> prelim;
    cout << "Input your midterm score: ";
    cin >> midterm;
    cout << "Input your final score: ";
    cin >> final;

    average = (prelim + midterm + final) / 3;

    cout << "Your average is: " << average;
    return 0;
}