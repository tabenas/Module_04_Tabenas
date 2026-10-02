#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double mealPrice;
    int mealQuantity;
    double serviceChargePercentage;
    int numberOfStudentsSharing;

    cout << "Meal price: ";
    cin >> mealPrice;

    cout << "Quantity: ";
    cin >> mealQuantity;

    cout << "Service Charge (%): ";
    cin >> serviceChargePercentage;

    cout << "Number of students sharing: ";
    cin >> numberOfStudentsSharing;

    double subTotal = mealPrice * mealQuantity;
    double serviceCharge = subTotal * (serviceChargePercentage / 100.0);
    double finalBill = subTotal + serviceCharge;
    double sharePerStudent = finalBill / numberOfStudentsSharing;

    cout << fixed << setprecision(2);

    cout << "\n--------Bill Summary-------\n";
    cout << "\nSubtotal: $" << subTotal << endl;
    cout << "Service charge: $" << serviceCharge << endl;
    cout << "Final bill: $" << finalBill << endl;
    cout << "Each student's share: $" << sharePerStudent << endl;

    return 0;
}