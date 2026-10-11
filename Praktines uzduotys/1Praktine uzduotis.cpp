#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;
    double suma;
    double gauta;
    int choice;
    int valiuta;
    cout << fixed << setprecision(2);
    do {
        cout << "\n---Valiutos Meniu---\n";
        cout << "1. Valiutos kurso palyginimas su euru\n";
        cout << "2. Valiutos pirkimas\n";
        cout << "3. Valiutos pardavimas\n";
        cout << "4. Iseiti\n";
        cout << "Pasirinkite: \n";
        cin >> choice;
        if (choice < 1 || choice > 4) {cout << "Nera tokio pasirinkimo\n";}
        switch (choice) {
            case 1: {
                cout << "---Valiutos pasirinkimas---\n";
                cout << "1. GBP\n";
                cout << "2. USD\n";
                cout << "3. INR\n";
                cout << "Pasirinkite valiuta: \n";
                cin >> valiuta;
                if (valiuta < 1 || valiuta > 3) {
                    cout << "Nera tokio pasirinkimo\n";
                    break;
                }
                if (valiuta == 1 || valiuta == 2 || valiuta == 3) {
                    cout << "Iveskite suma eurais: ";}
                cin >> suma;
                if (suma <= 0) {cout << "Neteisinga suma.\n";}
                else if (valiuta == 1) {
                    gauta = suma * GBP_Bendras;
                    cout << "Gauta suma: " << gauta << " GBP\n";}
                else if (valiuta == 2) {
                    gauta = suma * USD_Bendras;
                    cout << "Gauta suma: " << gauta << " USD\n";}
                else if (valiuta == 3) {
                    gauta = suma * INR_Bendras;
                    cout << "Gauta suma: " << gauta
                    << " INR\n";}
                break;
            }
            case 2: {
                cout << "---Valiutos pasirinkimas---\n";
                cout << "1. GBP\n";
                cout << "2. USD\n";
                cout << "3. INR\n";
                cout << "Pasirinkite valiuta: \n";
                cin >> valiuta;
                if (valiuta < 1 || valiuta > 3) {
                    cout << "Nera tokio pasirinkimo\n";
                    break;
                }
                if (valiuta == 1 || valiuta == 2 || valiuta == 3) {
                    cout << "Iveskite suma eurais: ";}
                cin >> suma;
                if (suma <= 0) {cout << "Neteisinga suma.\n";}
                else if (valiuta == 1) {
                    gauta = suma * GBP_Pirkti;
                    cout << "Gauta suma: " << gauta << " GBP\n";}
                else if (valiuta == 2) {
                    gauta = suma * USD_Pirkti;
                    cout << "Gauta suma: " << gauta << " USD\n";}
                else if (valiuta == 3) {
                    gauta = suma * INR_Pirkti;
                    cout << "Gauta suma: " << gauta << " INR\n";}
                break;
            }
            case 3: {
                cout << "---Valiutos pasirinkimas---\n";
                cout << "1. GBP\n";
                cout << "2. USD\n";
                cout << "3. INR\n";
                cout << "Pasirinkite valiuta: \n";
                cin >> valiuta;
                if (valiuta < 1 || valiuta > 3) {
                    cout << "Nera tokio pasirinkimo\n";
                    break;
                }
                if (valiuta == 1 || valiuta == 2 || valiuta == 3) {
                    cout << "Iveskite suma: ";}
                cin >> suma;
                if (suma <= 0) {cout << "Neteisinga suma.\n";}
                else if (valiuta == 1) {
                    gauta = suma / GBP_Parduoti;
                    cout << "Gauta suma: " << gauta << " Eur\n";}
                else if (valiuta == 2) {
                    gauta = suma / USD_Parduoti;
                    cout <<"Gauta suma: " << gauta << " Eur\n";}
                else if (valiuta == 3) {
                    gauta = suma / INR_Parduoti;
                    cout << "Gauta suma: " << gauta << " Eur\n";}
                break;
            }
        }
             } while (choice != 4);
            return 0;
        }