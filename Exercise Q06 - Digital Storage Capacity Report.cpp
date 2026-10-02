#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    long long fileSizeInBytes;

    cout << "File size in bytes: ";
    cin >> fileSizeInBytes;

    double kilobytes = fileSizeInBytes / 1024.0;
    double megabytes = kilobytes / 1024.0;
    double gigabytes = megabytes / 1024.0;
    long long wholeMegabytes = (long long)megabytes;

    cout << "\n--------Storage Capacity Report-------\n";
    cout << fixed << setprecision(2);
    cout << "KB: " << kilobytes << endl;
    cout << "MB: " << megabytes << endl;

    cout << setprecision(4);
    cout << "GB: " << gigabytes << endl;

    cout << defaultfloat;
    cout << "Whole MB: " << wholeMegabytes << endl;

    return 0;
}
