#include "Dog.h"
#include <iostream>
using namespace std;

Dog::Dog(){
  
}

void Dog::goForWalk(){
  hunger += 30;
  boredom -= 30;
  sleepiness += 30;
  hourCounter++;
  turnCounter++;
  cout << "You took " << name << " for a walk!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Dog::giveTreat(){
  hunger -= 30;
  boredom -= 30;
  sleepiness += 30;
  hourCounter++;
  turnCounter++;
  cout << "You gave " << name << " a treat!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Dog::displayActions(){
  Pet::displayActions();
  cout << "4) Take " << getName() << " for a walk." << endl;
  cout << "5) Give " << getName() << " a treat." << endl;
}