1#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int balance = 100;
    int choice;
    do {
        cout << "\n---Valiutos Meniu---\n";
        cout << "1. Valiutos kurso palyginimas su euru\n";
        cout << "2. Valiutos pirkimas\n";
        cout << "3. Valiutos pardavimas\n";
        cout << "4. Išeiti\n";
        cout << "Pasirinkite funkcija\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Saskaiti likutis: "<< balance << " Eur\n";
                break;
            case 2: {
                int amount;
                cout << "1. GPT";
                cout << "2. USD";
                cout << "3. INR";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Saskaita yra papildyta. \n";
                } else {
                    cout << "Netinkama suma";
                }
                break;
            }
            case 3: {
                int amount;
                cout << "Mokejimo suma: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Neteisinga suma. \n";
                } else if (amount > balance) {
                    cout << "Nepakankamas likutis saskaitoje. \n";
                } else {
                    balance -= amount;
                    cout << "Mokejimas atliktas";
                }
                break;
            }
            case 0:
                cout << "Programa baige darba\n";
                break;
            default:
                cout << "Tokios operacijos nera\n";
        }
    } while (choice != 0);
    return 0;
}
