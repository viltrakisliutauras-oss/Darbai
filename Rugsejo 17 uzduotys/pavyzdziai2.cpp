#include <iostream>
using namespace std;
#include "pavyzdziai2.h"
int main() {
    const int STUDENTU_KIEKIS = 10;
    const int MAZIAUSES = 1;
    const int DIDZIAUSES = 10;
    int pazymiai[STUDENTU_KIEKIS];
    int dazniai[DIDZIAUSES+1] ={0};

    for (int i=0; i < STUDENTU_KIEKIS; i++) {
        int pazymys;
        do {
            cout <<"iveskite"<<i+1<<" studento pazymi (1-10): "<<endl;
            cin>>pazymys;
        } while (pazymys < MAZIAUSES || pazymys > DIDZIAUSES);
        pazymiai[i] = pazymys;
    }
        for (int i=0; i < STUDENTU_KIEKIS; i++) {
            dazniai[pazymiai[i]]++;
        }

        cout <<"pazymiu dazniai: "<<endl;
        for (int pazymys = MAZIAUSES; pazymys <= DIDZIAUSES; pazymys++) {
            if (dazniai[pazymiai[pazymys]] > 0) {
                
            }
        }

        cout <<pazymys<<": "<< dazniai[pazymys]<<endl;}
    }
}
return 0;
}