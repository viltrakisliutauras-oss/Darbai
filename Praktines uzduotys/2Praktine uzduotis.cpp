#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string vardai[100];
    int choice;
    do {
        cout << "\n--- Mokiniu pazymiu sistema ---\n";
        cout << "1. Ivesti mokini ir jo pazymius\n";
        cout << "2. Perziureti visu mokiniu pazymius\n";
        cout << "3. Perziureti konkretaus mokinio pazymius\n";
        cout << "4. Atnaujinti pazymi\n";
        cout << "5. Apskaiciuoti mokinio vidurki\n";
        cout << "6. Pasalinti mokini\n";
        cout << "7. Iseiti\n";
        cout << "Pasirinkite: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Neteisingas pasirinkimas.\n";
            continue;
        }
        switch (choice) {
            case 1: {
            }
            return 0;
        }