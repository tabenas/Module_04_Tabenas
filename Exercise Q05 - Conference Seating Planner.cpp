#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main()
{
    int numberOfAttendees;
    int seatsPerTable;

    cout << "Number of attendees: ";
    cin >> numberOfAttendees;

    cout << "Seats per table: ";
    cin >> seatsPerTable;

    double exactTables = (double)numberOfAttendees / seatsPerTable;
    int tablesRequired = ceil(exactTables);
    int totalAvailableSeats = tablesRequired * seatsPerTable;
    int unusedSeats = totalAvailableSeats - numberOfAttendees;

    cout << fixed << setprecision(2);

    cout << "\n--------Seating Summary-------\n";
    cout << "Exact tables: " << exactTables + 0.0000001 << endl;

    cout << defaultfloat;
    cout << "Tables required: " << tablesRequired << endl;
    cout << "Total seats: " << totalAvailableSeats << endl;
    cout << "Unused seats: " << unusedSeats << endl;

    return 0;
}
