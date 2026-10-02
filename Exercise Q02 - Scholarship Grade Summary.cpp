#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main()
{
    double quizScore;
    double labScore;
    double projectScore;
    double examinationScore;

    cout << "Enter the quiz score: ";
    cin >> quizScore;

    cout << "Enter the lab score: ";
    cin >> labScore;

    cout << "Enter the project score: ";
    cin >> projectScore;

    cout << "Enter the exam score: ";
    cin >> examinationScore;

    double weightedGrade = 
        (quizScore * 0.20) +
        (labScore * 0.25) +
        (projectScore * 0.25) +
        (examinationScore * 0.30);

    int roundedGrade = round(weightedGrade);
    int convertedGrade = (int)weightedGrade;

    cout << "\n--------Grade Summary-------\n";
    cout << fixed <<setprecision(2);
    cout << "Weighted Grade: " << weightedGrade << endl;

    cout << defaultfloat;
    cout << "Rounded Grade: " << roundedGrade << endl;
    cout << "Converted Grade: " << convertedGrade << endl;

    return 0;
}