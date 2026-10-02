#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main()
{
    double wallWidth;
    double wallHeight;
    int numberOfCoats;
    double coveragePerCan;

    cout << "Wall width: ";
    cin >> wallWidth;

    cout << "Wall height: ";
    cin >> wallHeight;

    cout << "Number of coats: ";
    cin >> numberOfCoats;   

    cout << "Coverage per can: ";
    cin >> coveragePerCan;

    double wallArea = wallWidth * wallHeight;
    double totalPaintArea = wallArea * numberOfCoats;
    double exactCans = totalPaintArea / coveragePerCan;
    int cansToBuy = ceil(exactCans);

    cout << fixed << setprecision(2);

    cout << "\n--------Paint Summary-------\n";
    cout << "Wall area: " << wallArea << endl;
    cout << "Total paint area: " << totalPaintArea << endl;
    cout << "Exact cans: " << exactCans << endl;

    cout << defaultfloat;
    cout << "Cans to buy: " << cansToBuy << endl;

    return 0;
}
