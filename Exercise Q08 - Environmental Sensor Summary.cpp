#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main()
{
    double firstTemperature;
    double secondTemperature;
    double thirdTemperature;

    cout << "First temperature reading: ";
    cin >> firstTemperature;

    cout << "Second temperature reading: ";
    cin >> secondTemperature;

    cout << "Third temperature reading: ";
    cin >> thirdTemperature;

    double averageTemperature =
        (firstTemperature + secondTemperature + thirdTemperature) / 3.0;
    double absoluteDifference = fabs(firstTemperature - thirdTemperature);
    int floorAverage = floor(averageTemperature);
    int ceilAverage = ceil(averageTemperature);
    int truncAverage = trunc(averageTemperature);
    int roundAverage = round(averageTemperature);

    cout << fixed << setprecision(3);

    cout << "\n--------Environmental Sensor Summary-------\n";
    cout << "Average: " << averageTemperature << endl;
    cout << "|T1-T3|: " << absoluteDifference << endl;

    cout << defaultfloat;
    cout << "Floor: " << floorAverage << endl;
    cout << "Ceil: " << ceilAverage << endl;
    cout << "Trunc: " << truncAverage << endl;
    cout << "Round: " << roundAverage << endl;

    return 0;
}
