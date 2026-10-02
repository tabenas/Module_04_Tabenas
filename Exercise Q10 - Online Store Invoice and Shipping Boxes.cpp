#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include <cmath>

int main()
{
    string productName;
    double unitPrice;
    int quantity;
    double discountPercentage;
    double shippingFeePerBox;
    int unitsPerBox;

    cout << "Product name: ";
    getline(cin, productName);

    cout << "Unit price: ";
    cin >> unitPrice;

    cout << "Quantity: ";
    cin >> quantity;

    cout << "Discount (%): ";
    cin >> discountPercentage;

    cout << "Shipping fee per box: ";
    cin >> shippingFeePerBox;

    cout << "Units per box: ";
    cin >> unitsPerBox;

    double subtotal = unitPrice * quantity;
    double discountAmount = subtotal * (discountPercentage / 100.0);
    double merchandiseTotal = subtotal - discountAmount;
    double exactBoxes = (double)quantity / unitsPerBox;
    int boxesRequired = ceil(exactBoxes);
    double shippingTotal = boxesRequired * shippingFeePerBox;
    double finalAmountDue = merchandiseTotal + shippingTotal;

    cout << fixed << setprecision(2);

    cout << "\n--------Online Store Receipt-------\n";
    cout << "Product:\t" << productName << endl;
    cout << "Subtotal:\t" << subtotal << endl;
    cout << "Discount:\t" << discountAmount << endl;
    cout << "Merchandise:\t" << merchandiseTotal << endl;
    cout << "Exact boxes:\t" << exactBoxes << endl;

    cout << defaultfloat;
    cout << "Boxes:\t\t" << boxesRequired << endl;

    cout << fixed << setprecision(2);
    cout << "Shipping:\t" << shippingTotal << endl;
    cout << "Amount due:\t" << finalAmountDue << endl;

    return 0;
}
