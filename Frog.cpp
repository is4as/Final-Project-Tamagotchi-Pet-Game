#include "Frog.h"
#include <iostream>
using namespace std;

Frog::Frog(){
  
}

void Frog::catchInsects(){
  hunger -= 30;
  boredom -= 30;
  sleepiness += 30;
  hourCounter++;
  turnCounter++;
  cout << "You let " << name << " catch insects!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Frog::swim(){
  hunger += 10;
  boredom -= 30;
  sleepiness += 10;
  hourCounter++;
  turnCounter++;
  cout << "You let " << name << " go for a swim!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Frog::displayActions(){
  Pet::displayActions();
  cout << "4) Let " << getName() << " catch insects." << endl;
  cout << "5) Let " << getName() << " swim." << endl;
}