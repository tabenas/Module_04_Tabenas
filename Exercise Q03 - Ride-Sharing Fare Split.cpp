#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double baseFare;
    double distanceInKilometers;
    double ratePerKilometer;
    double tollFee;
    double bookingFeePercentage;
    int numberOfPassengers;

    cout << "Base fare: ";
    cin >> baseFare;

    cout << "Distance in kilometers: ";
    cin >> distanceInKilometers;

    cout << "Rate per kilometer: ";
    cin >> ratePerKilometer;

    cout << "Toll fee: ";
    cin >> tollFee;

    cout << "Booking fee (%): ";
    cin >> bookingFeePercentage;

    cout << "Number of passengers: ";
    cin >> numberOfPassengers;

    double distanceCharge = distanceInKilometers * ratePerKilometer;
    double preFeeTotal = baseFare + distanceCharge + tollFee;
    double bookingFee = preFeeTotal * (bookingFeePercentage / 100.0);
    double grandTotal = preFeeTotal + bookingFee;
    double amountPerPassenger = grandTotal / numberOfPassengers;

    cout << fixed << setprecision(2);

    cout << "\n--------Fare Summary-------\n";
    cout << "Distance charge: " << distanceCharge << endl;
    cout << "Pre-fee total: " << preFeeTotal << endl;
    cout << "Booking fee: " << bookingFee << endl;
    cout << "Grand total: " << grandTotal << endl;
    cout << "Amount per passenger: " << amountPerPassenger << endl;

    return 0;
}
