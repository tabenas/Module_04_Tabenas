#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double baseTuition;
    double processingFeePercentage;
    double downPaymentAmount;
    int numberOfMonthlyInstallments;

    cout << "Base tuition: ";
    cin >> baseTuition;

    cout << "Processing fee (%): ";
    cin >> processingFeePercentage;

    cout << "Down payment amount: ";
    cin >> downPaymentAmount;

    cout << "Number of monthly installments: ";
    cin >> numberOfMonthlyInstallments;

    double processingFee = baseTuition * (processingFeePercentage / 100.0);
    double adjustedTuition = baseTuition + processingFee;
    double remainingBalance = adjustedTuition - downPaymentAmount;
    double monthlyInstallment = remainingBalance / numberOfMonthlyInstallments;

    cout << fixed << setprecision(2);

    cout << "\n--------Tuition Installment Summary-------\n";
    cout << "Processing fee: " << processingFee << endl;
    cout << "Adjusted tuition: " << adjustedTuition << endl;
    cout << "Remaining balance: " << remainingBalance << endl;
    cout << "Monthly installment: " << monthlyInstallment << endl;

    return 0;
}
