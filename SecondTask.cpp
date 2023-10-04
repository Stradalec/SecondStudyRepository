/**********************************
* Автор: Калинин Андрей           *
* Дата: 22.09.2023                *
* Название: Вариант номер 3       *
* https://onlinegdb.com/eaXjdBf1M *
**********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double electromotiveForce;
  double internalResistance;
  double resistance;
  double currentPower;

  cout << "Electromotive force = ";
  cin >> electromotiveForce;
  cout << "Internal resistance = ";
  cin >> internalResistance;
  cout << "Resistance = ";
  cin >> resistance;
  cout << " " << '\n';

  while (resistance < 50) {

    currentPower = resistance * pow(electromotiveForce / (resistance + internalResistance), 2);
    
    cout.precision(5);
    cout << "External resistance: " << resistance << " Ω" <<  '\n'
         << "Current power: " << currentPower << " W" << '\n'
         << " " << '\n'; // This is done so that the results of iterations are separated.
    
      resistance += 10;
    }
  
  do {
    currentPower = resistance * pow(electromotiveForce / (resistance + internalResistance), 2);
    
    cout.precision(5);
    cout << "External resistance: " << resistance << " Ω" << '\n'
        << "Current power: " << currentPower << " W" << '\n'
        << " " << '\n'; // This is done so that the results of iterations are separated.

      resistance += 50; 
    } while (resistance <= 300);
  
  return 0;
}

