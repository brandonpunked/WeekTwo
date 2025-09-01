#include <iostream>
using namespace std;

int main() {
    int quantity;
    double unitPrice, extendedPrice;

    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter unit price: ";
    cin >> unitPrice;

    extendedPrice = quantity * unitPrice;

    cout << "Extended price is: " << extendedPrice << endl;

    return 0;
}