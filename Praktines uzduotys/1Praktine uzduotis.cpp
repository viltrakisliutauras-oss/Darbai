#include <iostream>
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
        cout << "4. Iseiti\n";
        cout << "Pasirinkite: \n";
        cin >> choice;

        switch (choice) {
            case 1:
                int valiuta;
                cout << "---Valiutos pasirinkimas---\n";
                    cout << "1. GBP\n";
                    cout << "2. USD\n";
                    cout << "3. INR\n";
                    cout << "Pasirinkite valiuta: \n";
                    cin >> valiuta;
                if (valiuta == 1) {cout << "GBP_Bendras 1 Eur = 0.8729 GBP; GBP_Pirkti 1 Eur = 0.8600 GBP; GBP_Parduoti 1 Eur = 0.9220 GBP;"}
                else if (valiuta == 2) {cout << "USD_Bendras 1 Eur = 1.1793 USD; USD_Pirkti 1 Eur = 1.1460 USD; USD_Parduoti 1 Eur = 1.2340 USD;"}
                else if (valiuta == 3) {cout << "INR_Bendras: 1 Eur = 104.6918 INR; INR_Pirkti: 1 Eur =101.3862 INR; INR_Parduoti: 1 Eur = 107.8546 INR;"}
                int amount;
                if (amount > 0)
                break; {
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
