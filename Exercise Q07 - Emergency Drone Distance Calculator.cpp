#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main()
{
    double x1;
    double y1;
    double x2;
    double y2;

    cout << "Starting x-coordinate: ";
    cin >> x1;

    cout << "Starting y-coordinate: ";
    cin >> y1;

    cout << "Target x-coordinate: ";
    cin >> x2;

    cout << "Target y-coordinate: ";
    cin >> y2;

    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(pow(dx, 2) + pow(dy, 2));
    int roundedDistance = round(distance);

    cout << fixed << setprecision(3);

    cout << "\n--------Drone Distance Summary-------\n";
    cout << "dx: " << dx << endl;
    cout << "dy: " << dy << endl;
    cout << "Distance: " << distance << endl;

    cout << defaultfloat;
    cout << "Rounded distance: " << roundedDistance << endl;

    return 0;
}
