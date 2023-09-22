/**********************************
* Автор: Калинин А.А.             *
* Дата: 22.09.2023                *
* Название: Вариант номер 3       *
* https://onlinegdb.com/LdJlUbjss *
**********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int electromotiveForce    = 115;
  double internalResistance = 29.7;
  int resistance            = 10;
  double currentPower;
  
  while (resistance <= 300) {

    currentPower = resistance * pow(electromotiveForce /(resistance + internalResistance), 2);
    
    cout.precision(5);
    cout << "External resistance: " << resistance << " Ω" <<  '\n'
         << "Current power: " << currentPower << " W" << '\n'
         << " " << '\n'; // This is done so that the results of iterations are separated.
         
    resistance += 10;
  } 
  
  return 0;
}

