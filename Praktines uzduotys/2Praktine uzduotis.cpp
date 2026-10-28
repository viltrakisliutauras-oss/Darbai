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
                if (mokiniuKiekis >= 100) {
                    cout << "Mokiniu limitas pasiektas.\n";
                }
                cout << "Iveskite mokinio varda: ";
                cin >> vardai[mokiniuKiekis];
                int kiekis;
                do {
                    cout << "Kiek pazymiu turi mokinys (0-10): ";
                    cin >> kiekis;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(10000, '\n');
                        kiekis = -1;
                    }
                    if (kiekis < 0 || kiekis > 10) {
                        cout << "Iveskite skaiciu nuo 0 iki 10.\n";
                    }
                } while (kiekis < 0 || kiekis > 10);
                pazymiuKiekis[mokiniuKiekis] = kiekis;
                for (int i = 0; i < kiekis; i++) {
                    do {
                        cout << "Iveskite " << i + 1
                             << " pazymi (1-10): ";
                        cin >> pazymiai[mokiniuKiekis][i];
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            pazymiai[mokiniuKiekis][i] = 0;
                        }
                        if (pazymiai[mokiniuKiekis][i] < 1 ||
                            pazymiai[mokiniuKiekis][i] > 10) {
                            cout << "Pazymys turi buti nuo 1 iki 10.\n";
                            }
                    } while (pazymiai[mokiniuKiekis][i] < 1 ||
                             pazymiai[mokiniuKiekis][i] > 10);
                }
                mokiniuKiekis++;
                cout << "Mokinys pridetas.\n";
            }
                break;
            }
        } while (choice !=7);
        return 0;
    }