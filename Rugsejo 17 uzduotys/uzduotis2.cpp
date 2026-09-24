#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "uzduotis2.h"
int main() {
    const int gradesCount = 5;
    int grade;
    int sum = 0;
    int highestGrade = 0;


    for (int i = 1; i <= gradesCount; i++) {
        cout <<"Iveskite "<<i<<" studento pazymi: ";
        cin >> grade;

        sum += grade;

        if (grade > highestGrade) {
            highestGrade = grade;
        }
    }
    double average = static_cast<double>(sum) / gradesCount;
    cout <<fixed<< setprecision(2);
    cout <<"Pazymiu vidurkis: "<<average <<endl;
    if (average > 5) cout <<"teigiamas"<<endl;
        else cout <<"neigiamas"<<endl;
    cout <<"Didziausias pazymys: "<<highestGrade <<endl;
    return 0;
}
