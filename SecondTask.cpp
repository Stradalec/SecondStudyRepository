/**********************************
* Автор: Калинин Андрей           *
* Дата: 22.09.2023                *
* Название: Вариант номер 3       *
* https://onlinegdb.com/MNd9hXZKm *
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

  while (resistance <= 300) {

    currentPower = resistance * pow(electromotiveForce / (resistance + internalResistance), 2);
    
    cout.precision(5);
    cout << "External resistance: " << resistance << " Ω" <<  '\n'
         << "Current power: " << currentPower << " W" << '\n'
         << " " << '\n'; // This is done so that the results of iterations are separated.
         
    if (resistance < 50) {
      resistance += 10;
    } else {
      resistance += 50;
    }
   
  } 
  
  return 0;
}

