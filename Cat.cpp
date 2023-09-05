#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat(){
  
}

void Cat::chaseMouse(){
  hunger += 10;
  boredom -= 30;
  sleepiness += 10;
  hourCounter++;
  turnCounter++;
  cout << "You let " << name << " chase a mouse!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Cat::takeNap(){
  hunger += 30;
  boredom += 30;
  sleepiness -= 30;
  hourCounter++;
  turnCounter++;
  cout << "You let " << name << " take a nap!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Cat::displayActions(){
  Pet::displayActions();
  cout << "4) Let " << getName() << " chase a mouse." << endl;
  cout << "5) Let " << getName() << " take a nap." << endl;
}