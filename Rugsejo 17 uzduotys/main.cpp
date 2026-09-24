#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    //string password;
    // do {
    // cout << "Sukurkite slaptazodi bent 8 simboliu ilgumo" << endl;
    //    cin >> password;
    //     if (password.length() < 8) {
    //      cout << "slaptazodis per trumpas" << endl;
    //   }
    // } while (password.length() < 8);
    //  cout << "Slaptazodis yra priimtas"<<endl;
    // 4 pavizdys
   // int balance = 100;
    //int choice;
   // do {
      //  cout << "\n--- SASKAITOS MENIU ---\n";
     //  cout << "1. Perziureti saskaitos likuti\n";
     //   cout << "2. Papildyti saskaita \n";
    //    cout << "3. Atlikti mokejima \n";
     //   cout << "0. Baigti programa \n";
     //   cout << "pasirinkti funkcija \n";
     //   cin >> choice;
      //  switch (choice) {
        //    case 1:
         //       cout << "Saskaitos likutis: " << balance << " Eur\n";
         //       break;
        //    case 2: {
         //       int amount;
         //       cout << "Papildoma suma: ";
        //        cin >> amount;
          //      if (amount > 0) {
          //          balance += amount;
          //          cout << "Balansas papildytas. \n";
          //      } else {
          //         cout << "Neteisinga suma. Ivedama suma turi buti teigiama. \n";
           //     }
           //     break;
           // }
           // case 3: {
           //     int amount;
           //     cout << "Mokejimo suma";
            //    cin >> amount;
           //     if (amount <= 0) {
            //        cout << "Neteisinga suma. \n";
            //    } else if (amount > balance) {
             //       cout << "Nepakankamas likutis balanse. \n";
            //    } else {
             //       balance -= amount; //balance = balance - amount
              //      cout << "Mokejimas atliktas \n";
            //    }
           //     break;
          //  case 0:
          //      cout << "Programa baigiama. \n";
          //      break;
          //  default:
          //      cout << "Tokio pasirinkimo nera. \n";
          //  }
     //   }
  //  } while (choice != 0);
 // 5 pavizdys
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
 cout <<"Didziausias pazymys: "<<highestGrade <<endl;
return 0;
}
