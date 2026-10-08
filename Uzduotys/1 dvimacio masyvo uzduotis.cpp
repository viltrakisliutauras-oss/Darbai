#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int kiekis;
    do {
        cout<<"iveskite studentu skaiciu: \n"<<endl;
        if (kiekis<0) {cout<<"ivestas neteisingas parjantas"<<endl;}
        cin>>kiekis;
    };
        return 0;
    }



