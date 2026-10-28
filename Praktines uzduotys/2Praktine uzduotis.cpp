#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    string vardai[100];
    int mokinys;
    int pazymioNr;
    int naujasPazymys;
    int suma;
    double vidurkis;
    int choice = 0;
    int pazymiai[100][10] = {};
    int pazymiuKiekis[100] = {};
    int mokiniuKiekis = 0;
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
                    break;
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
                break;
                case 2: {
                    if (mokiniuKiekis == 0) {
                        cout << "Mokiniu sarasas tuscias.\n";
                        break;
                    }
                    for (int i = 0; i < mokiniuKiekis; i++) {
                        cout << i + 1 << ". " << vardai[i] << ": ";
                        for (int j = 0; j < pazymiuKiekis[i]; j++) {
                            cout << pazymiai[i][j] << " ";
                        }
                    }
                    cout << "\n";
                    break;
                    case 3: {
                        if (mokiniuKiekis == 0) {
                            cout << "Mokiniu sarasas tuscias.\n";
                            break;
                        }
                        cout << "Mokinio numeris (1-"
                             << mokiniuKiekis << "): ";
                        cin >> mokinys;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Neteisingas mokinio numeris.\n";
                            break;
                        }
                        if (mokinys < 1 || mokinys > mokiniuKiekis) {
                            cout << "Neteisingas mokinio numeris. "
                                 << "Iveskite skaiciu nuo 1 iki "
                                 << mokiniuKiekis << ".\n";
                            break;
                        }
                        cout << vardai[mokinys - 1] << " pazymiai: ";
                        for (int i = 0; i < pazymiuKiekis[mokinys - 1]; i++) {
                            cout << pazymiai[mokinys - 1][i] << " ";
                        }
                        if (pazymiuKiekis[mokinys - 1] == 0) {
                            cout << "Mokinys pazymiu neturi.";
                        }
                        cout << "\n";
                        break;
                    }
                    case 4: {
                        if (mokiniuKiekis == 0) {
                            cout << "Mokiniu sarasas tuscias.\n";
                            break;
                        }
                        cout << "Mokinio numeris (1-"
                             << mokiniuKiekis << "): ";
                        cin >> mokinys;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Neteisingas mokinio numeris.\n";
                            break;
                        }
                        if (mokinys < 1 || mokinys > mokiniuKiekis) {
                            cout << "Neteisingas mokinio numeris. "
                                 << "Iveskite skaiciu nuo 1 iki "
                                 << mokiniuKiekis << ".\n";
                            break;
                        }
                        if (pazymiuKiekis[mokinys - 1] == 0) {
                            cout << "Mokinys pazymiu neturi.\n";
                            break;
                        }
                        cout << "Pazymio numeris (1-"
                             << pazymiuKiekis[mokinys - 1] << "): ";
                        cin >> pazymioNr;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Neteisingas pazymio numeris.\n";
                            break;
                        }
                        if (pazymioNr < 1 ||
                            pazymioNr > pazymiuKiekis[mokinys - 1]) {
                            cout << "Neteisingas pazymio numeris. "
                                 << "Iveskite skaiciu nuo 1 iki "
                                 << pazymiuKiekis[mokinys - 1] << ".\n";
                            break;
                            }
                        do {
                            cout << "Iveskite nauja pazymi (1-10): ";
                            cin >> naujasPazymys;
                            if (cin.fail()) {
                                cin.clear();
                                cin.ignore(10000, '\n');
                                naujasPazymys = 0;
                            }
                            if (naujasPazymys < 1 || naujasPazymys > 10) {
                                cout << "Pazymys turi buti nuo 1 iki 10.\n";
                            }
                        } while (naujasPazymys < 1 || naujasPazymys > 10);
                        pazymiai[mokinys - 1][pazymioNr - 1] = naujasPazymys;
                        cout << "Pazymys atnaujintas.\n";
                        break;
                    }
                    case 5: {
                        if (mokiniuKiekis == 0) {
                            cout << "Mokiniu sarasas tuscias.\n";
                            break;
                        }
                        cout << "Mokinio numeris (1-"
                             << mokiniuKiekis << "): ";
                        cin >> mokinys;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Neteisingas mokinio numeris.\n";
                            break;
                        }
                        if (mokinys < 1 || mokinys > mokiniuKiekis) {
                            cout << "Neteisingas mokinio numeris. "
                                 << "Iveskite skaiciu nuo 1 iki "
                                 << mokiniuKiekis << ".\n";
                            break;
                        }
                        if (pazymiuKiekis[mokinys - 1] == 0) {
                            cout << "Mokinys pazymiu neturi.\n";
                            break;
                        }
                        suma = 0;
                        for (int i = 0; i < pazymiuKiekis[mokinys - 1]; i++) {
                            suma += pazymiai[mokinys - 1][i];
                        }
                        vidurkis = (double)suma / pazymiuKiekis[mokinys - 1];
                        cout << fixed << setprecision(2);
                        cout << vardai[mokinys - 1]
                             << " vidurkis: " << vidurkis << "\n";
                        break;
                    }
                    case 6: {
                        if (mokiniuKiekis == 0) {
                            cout << "Mokiniu sarasas tuscias.\n";
                            break;
                        }
                        cout << "Mokinio numeris (1-"
                             << mokiniuKiekis << "): ";
                        cin >> mokinys;
                        if (cin.fail()) {
                            cin.clear();
                            cin.ignore(10000, '\n');
                            cout << "Neteisingas mokinio numeris.\n";
                            break;
                        }
                        if (mokinys < 1 || mokinys > mokiniuKiekis) {
                            cout << "Neteisingas mokinio numeris. "
                                 << "Iveskite skaiciu nuo 1 iki "
                                 << mokiniuKiekis << ".\n";
                            break;
                        }
                        for (int i = mokinys - 1; i < mokiniuKiekis - 1; i++) {
                            vardai[i] = vardai[i + 1];
                            pazymiuKiekis[i] = pazymiuKiekis[i + 1];
                            for (int j = 0; j < 10; j++) {
                                pazymiai[i][j] = pazymiai[i + 1][j];
                            }
                        }
                        mokiniuKiekis--;
                        cout << "Mokinys pasalintas.\n";
                        break;
                    }
                    case 7: cout << "Programa baigta.\n";
                    break;
                    default:
                    cout << "Nera tokio pasirinkimo.\n";
                }
            }
        }
        } while (choice !=7);
        return 0;
    }