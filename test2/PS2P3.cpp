#include <iostream>
using namespace std;

int main() {
    double length, width, area, circumference;

    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    circumference = 2 * length + 2 * width;

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}