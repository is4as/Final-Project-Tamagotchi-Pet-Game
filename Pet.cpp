#include "Pet.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Pet::Pet(){

}

int Pet::getPetNumber(){
  return petNumber;
}

string Pet::getName(){
  return name;
}

int Pet::getHunger(){
  return hunger;
}

int Pet::getBoredom(){
  return boredom;
}

int Pet::getSleepiness(){
  return sleepiness;
}

int Pet::getHourCounter(){
  return hourCounter;
}

int Pet::getTurnCounter(){
  return turnCounter;
}

void Pet::setPetNumber(int _petNumber){
  petNumber = _petNumber;
}

void Pet::setName(string _name){
  name = _name;
}

void Pet::setHunger(int _hunger){
  hunger = _hunger;
}

void Pet::setBoredom(int _boredom){
  boredom = _boredom;
}

void Pet::setSleepiness(int _sleepiness){
  sleepiness = _sleepiness;
}

void Pet::setHourCounter(int _hourCounter){
  hourCounter = _hourCounter;
}

void Pet::setTurnCounter(int _turnCounter){
  turnCounter = _turnCounter;
}

void Pet::playPet(){
  hunger+= 20;
  boredom-= 40;
  sleepiness+= 20;
  hourCounter++;
  turnCounter++;
  cout << "You played with " << name << "!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Pet::sleepPet(){
  hunger+= 20; 
  boredom+= 20;
  sleepiness-= 40;
  hourCounter+= 5;
  turnCounter++;
  cout << name << " reseted for 5 hours!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Pet::feedPet(){
  hunger-= 40;
  boredom-= 20;
  sleepiness+= 20;
  hourCounter++;
  turnCounter++;
  cout << name << " is fed!" << endl;
  cout << "__________________________________________________________________________" << endl;
}

void Pet::passTime(){
  if (turnCounter % 5 == 0){
    int randNum = rand() % 3;
    if (randNum == 0){
      hunger += 20;
      cout << "---=== 5 turns have passed! Hunger level raised by 20! ===---" << endl;
    }
    else if (randNum == 1){
      boredom += 20;
      cout << "---=== 5 turns have passed! Boredom level raised by 20! ===---" << endl;
    }
    else {
      sleepiness += 20;
      cout << "---=== 5 turns have passed! Sleepiness level raised by 20! ===---" << endl;
    }
  }
}

void Pet::warningMessage(){
  if (hunger >= 90 && hunger <= 99){
    cout << "---=== Warning: " << name << "'s hunger level is high! ===---" << endl;
  }
  if (boredom >= 90 && boredom <=99){
    cout << "---=== Warning: " << name << "'s boredom level is high! ===---" << endl;
  }
  if (sleepiness >= 90 && sleepiness <=99){
    cout << "---=== Warning: " << name << "'s sleepiness level is high! ===---" << endl;
  }
}

void Pet::displayActions(){
  cout << "Pick an interaction: " << endl;
  cout << "0) Save and quit game" << endl;
  cout << "1) Play with " << getName() << "." << endl;
  cout << "2) Let " << getName() << " sleep." << endl;
  cout << "3) Feed " << getName() << "." << endl;
}

void Pet::displayStats(){
  cout << "Hunger: " << hunger << " / 100" << endl;
  cout << "Sleepiness: " << sleepiness << " / 100" << endl;
  cout << "Boredom: " << boredom << " / 100" << endl;
}

void Pet::updateStats(){
  if (hunger > 100) {
    hunger = 100;
  } else if (hunger < 0) {
    hunger = 0;
  }

  if (boredom > 100) {
    boredom = 100;
  } else if (boredom < 0) {
    boredom = 0;
  }

  if (sleepiness > 100) {
    sleepiness = 100;
  } else if (sleepiness < 0) {
    sleepiness = 0;
  }
}

bool Pet::petLiving(){
  if(hunger >= 100){
    cout << "__________________________________________________________________________" << endl;
    cout << name << " died of hunger </3." << endl;
    return false;
  }
  else if (sleepiness >= 100){
    cout << "__________________________________________________________________________" << endl;
    cout << name << " died of sleep deprivation </3." << endl;
    return false;
  }
  else if (boredom >= 100){
    cout << "__________________________________________________________________________" << endl;
    cout << name << " died of boredom </3." << endl;
    return false;
  }
  else if (hourCounter >= 50){
    cout << "__________________________________________________________________________" << endl;
    cout << "50 hours have passed, you win!" << endl;
    return false;
  }
  return true;
}

void Pet::saveInfo(string _filename){
  filename = _filename;
  ofstream outFS;
  outFS.open(filename);
  outFS << petNumber << endl;
  outFS << name << endl;
  outFS << hunger << endl;
  outFS << boredom << endl;
  outFS << sleepiness << endl;
  outFS << hourCounter << endl;
  outFS << turnCounter << endl;
  outFS.close();
}

void Pet::loadInfo(string _filename){
  filename = _filename;
  ifstream inFS;
  inFS.open(filename);
  while (!inFS) {
    cout << "Error: File could not be opened." << endl;
    cout << "Please enter a file name: ";
    cin >> filename;
  }
  inFS >> petNumber;
  inFS.ignore();
  getline(inFS, name);
  inFS >> hunger;
  inFS >> boredom;
  inFS >> sleepiness;
  inFS >> hourCounter;
  inFS >> turnCounter;
  inFS.close();
}