#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int MAX_STUD = 30;
    const int MAX_DALYKAI = 15;
    int pazimiai [MAX_STUD] [MAX_DALYKAI];
    int stud_kiekis, dalyku_kiekis;
        cout<<"iveskite studentu skaicius "<<stud_kiekis<<endl;
    cin>>stud_kiekis;
    cout << "iveskite dalyku skaiciu "<<dalyku_kiekis<<endl;
    cin>>dalyku_kiekis;
    if (stud_kiekis < 1 ||stud_kiekis > MAX_STUD|| dalyku_kiekis < 1 || dalyku_kiekis > MAX_STUD) {
        cout << "Klaida: netinkamas mokiniu ar dalyku kiekis"<<endl;
        return 1;
    }
    for (int i=0; i < stud_kiekis; i++) {
        cout << "iveskite "<<i+1<<"studento pazymius"<<endl;
        for (int j=0; j < dalyku_kiekis; j++) {
            cout <<"iveskite"<<j+1<<"dalyko pazymi (1-10):"<<endl;
            cin>>pazimiai[i][j];
        }
    }
    for (int i=0; i < stud_kiekis; i++) {
        int suma = 0;
        for (int j=0; j < dalyku_kiekis; j++) {
            suma += pazimiai[i][j];
        }
    }
    cout << "\n"<<left<<setw(n:15)<<"Studentas";
    cout <<setw(n:30) <<"Ivertinimai:"<<endl;
    for (int i=0; i < stud_kiekis; i++) {
        cout<<left<<setw(n:12)<<"Studentas"<<i+1<<endl;
    }

    };
        return 0;
    }



