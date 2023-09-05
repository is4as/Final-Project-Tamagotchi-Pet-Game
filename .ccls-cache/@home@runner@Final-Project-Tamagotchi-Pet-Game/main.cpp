/*
  Isaias Gonzalez
  PSID: 2134261
  COSC 1437: Final Project - Virtual Pet Simulator
  Tamagotchi pet game using object-oriented programming where the player selects
  a pet and has to maintain its hunger, sleepiness, and boredom status levels
  by selecting different interactions.
*/

#include "Cat.h"
#include "Dog.h"
#include "Frog.h"
#include "Pet.h"
#include <fstream>
#include <iostream>
using namespace std;

// Print file function
void printFile(string filename) {
  string line;
  ifstream inFS;
  inFS.open(filename);
  while (!inFS.eof()) {
    getline(inFS, line);
    cout << line << endl;
  }
  inFS.close();
}

// Main Code
int main() {
  int userChoice;
  int pickPet;
  string petName;
  string loadFilename;
  string newFilename;
  printFile("Menu.txt");
  cout << "Your choice: ";
  cin >> userChoice;
  while (userChoice != 1 && userChoice != 2) {
    cout << "Please select a valid option: ";
    cin >> userChoice;
  }
  // User chooses to create new pet
  if (userChoice == 1) {
    printFile("NewPetScreen.txt");
    cout << "Your choice: ";
    cin >> pickPet;
    while (pickPet != 1 && pickPet != 2 && pickPet != 3) {
      cout << "Please select a valid option: ";
      cin >> pickPet;
    }
    // User chooses dog
    if (pickPet == 1) {
      Dog userDog;
      userDog.setPetNumber(pickPet);
      cout << "________________________________________________________________"
              "__________"
           << endl;
      cout << "Name of dog: ";
      cin >> petName;
      userDog.setName(petName);
      userDog.setHunger(50);
      userDog.setBoredom(50);
      userDog.setSleepiness(50);
      int actionChoice;
      do {
        cout << "Current hour: " << userDog.getHourCounter() << endl;
        userDog.displayStats();
        if (!userDog.petLiving()) {
          break;
        }
        printFile("Dog.txt");
        userDog.displayActions();
        cout << "______________________________________________________________"
                "____________"
             << endl;
        cout << "Your choice: ";
        cin >> actionChoice;
        // Switch between interactions
        switch (actionChoice) {
        case 0:
          cout << "Please enter a file name for your pet: ";
          cin >> newFilename;
          userDog.saveInfo(newFilename);
          cout << "Quitting game..." << endl;
          break;
        case 1:
          userDog.playPet();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 2:
          userDog.sleepPet();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 3:
          userDog.feedPet();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 4:
          userDog.goForWalk();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 5:
          userDog.giveTreat();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        default:
          cout << "Please select a valid option." << endl;
          cout << "____________________________________________________________"
                  "______________"
               << endl;
          break;
        }
      } while (actionChoice != 0);
    }
    // User chooses cat
    else if (pickPet == 2) {
      Cat userCat;
      userCat.setPetNumber(pickPet);
      cout << "________________________________________________________________"
              "__________"
           << endl;
      cout << "Name of cat: ";
      cin >> petName;
      userCat.setName(petName);
      userCat.setHunger(50);
      userCat.setBoredom(50);
      userCat.setSleepiness(50);
      int actionChoice;
      do {
        cout << "Current hour: " << userCat.getHourCounter() << endl;
        userCat.displayStats();
        if (!userCat.petLiving()) {
          break;
        }
        printFile("Cat.txt");
        userCat.displayActions();
        cout << "______________________________________________________________"
                "____________"
             << endl;
        cout << "Your choice: ";
        cin >> actionChoice;
        // Switch between interactions
        switch (actionChoice) {
        case 0:
          cout << "Please enter a file name for your pet: ";
          cin >> newFilename;
          userCat.saveInfo(newFilename);
          cout << "Quitting game..." << endl;
          break;
        case 1:
          userCat.playPet();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 2:
          userCat.sleepPet();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 3:
          userCat.feedPet();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 4:
          userCat.chaseMouse();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 5:
          userCat.takeNap();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        default:
          cout << "Please select a valid option." << endl;
          cout << "____________________________________________________________"
                  "______________"
               << endl;
          break;
        }
      } while (actionChoice != 0);
    }
    // User chooses frog
    else if (pickPet == 3) {
      Frog userFrog;
      userFrog.setPetNumber(pickPet);
      cout << "________________________________________________________________"
              "__________"
           << endl;
      cout << "Name of frog: ";
      cin >> petName;
      userFrog.setName(petName);
      userFrog.setHunger(50);
      userFrog.setBoredom(50);
      userFrog.setSleepiness(50);
      int actionChoice;
      do {
        cout << "Current hour: " << userFrog.getHourCounter() << endl;
        userFrog.displayStats();
        if (!userFrog.petLiving()) {
          break;
        }
        printFile("Frog.txt");
        userFrog.displayActions();
        cout << "______________________________________________________________"
                "____________"
             << endl;
        cout << "Your choice: ";
        cin >> actionChoice;
        // Switch between interactions
        switch (actionChoice) {
        case 0:
          cout << "Please enter a file name for your pet: ";
          cin >> newFilename;
          userFrog.saveInfo(newFilename);
          cout << "Quitting game..." << endl;
          break;
        case 1:
          userFrog.playPet();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 2:
          userFrog.sleepPet();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 3:
          userFrog.feedPet();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 4:
          userFrog.catchInsects();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 5:
          userFrog.swim();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        default:
          cout << "Please select a valid option." << endl;
          cout << "____________________________________________________________"
                  "______________"
               << endl;
          break;
        }
      } while (actionChoice != 0);
    }
  }
  // User chooses to load in file
  else {
    cout << "__________________________________________________________________"
            "________"
         << endl;
    cout << "Type in file name: ";
    cin >> loadFilename;
    Pet userPet;
    userPet.loadInfo(loadFilename);
    pickPet = userPet.getPetNumber();
    // User loads in dog
    if (pickPet == 1) {
      Dog userDog;
      userDog.setName(userPet.getName());
      userDog.setHunger(userPet.getHunger());
      userDog.setBoredom(userPet.getBoredom());
      userDog.setSleepiness(userPet.getSleepiness());
      userDog.setHourCounter(userPet.getHourCounter());
      userDog.setTurnCounter(userPet.getTurnCounter());
      int actionChoice;
      cout << "Resuming Game..." << endl;
      cout << "________________________________________________________________"
              "__________"
           << endl;
      do {
        cout << "Current hour: " << userDog.getHourCounter() << endl;
        userDog.displayStats();
        if (!userDog.petLiving()) {
          break;
        }
        printFile("Dog.txt");
        userDog.displayActions();
        cout << "______________________________________________________________"
                "____________"
             << endl;
        cout << "Your choice: ";
        cin >> actionChoice;
        // Switch between interactions
        switch (actionChoice) {
        case 0:
          cout << "Please enter a file name for your pet: ";
          cin >> newFilename;
          userDog.saveInfo(newFilename);
          cout << "Quitting game..." << endl;
          break;
        case 1:
          userDog.playPet();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 2:
          userDog.sleepPet();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 3:
          userDog.feedPet();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 4:
          userDog.goForWalk();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        case 5:
          userDog.giveTreat();
          userDog.passTime();
          userDog.updateStats();
          userDog.warningMessage();
          break;
        default:
          cout << "Please select a valid option." << endl;
          cout << "____________________________________________________________"
                  "______________"
               << endl;
          break;
        }
      } while (actionChoice != 0);
    }
    // User loads in cat
    else if (pickPet == 2) {
      Cat userCat;
      userCat.setName(userPet.getName());
      userCat.setHunger(userPet.getHunger());
      userCat.setBoredom(userPet.getBoredom());
      userCat.setSleepiness(userPet.getSleepiness());
      userCat.setHourCounter(userPet.getHourCounter());
      userCat.setTurnCounter(userPet.getTurnCounter());
      int actionChoice;
      cout << "Resuming Game..." << endl;
      cout << "________________________________________________________________"
              "__________"
           << endl;
      do {
        cout << "Current hour: " << userCat.getHourCounter() << endl;
        userCat.displayStats();
        if (!userCat.petLiving()) {
          break;
        }
        printFile("Cat.txt");
        userCat.displayActions();
        cout << "______________________________________________________________"
                "____________"
             << endl;
        cout << "Your choice: ";
        cin >> actionChoice;
        // Switch between interactions
        switch (actionChoice) {
        case 0:
          cout << "Please enter a file name for your pet: ";
          cin >> newFilename;
          userCat.saveInfo(newFilename);
          cout << "Quitting game..." << endl;
          break;
        case 1:
          userCat.playPet();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 2:
          userCat.sleepPet();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 3:
          userCat.feedPet();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 4:
          userCat.chaseMouse();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        case 5:
          userCat.takeNap();
          userCat.passTime();
          userCat.updateStats();
          userCat.warningMessage();
          break;
        default:
          cout << "Please select a valid option." << endl;
          cout << "____________________________________________________________"
                  "______________"
               << endl;
          break;
        }
      } while (actionChoice != 0);
    }
    // User loads in frog
    else if (pickPet == 3) {
      Frog userFrog;
      userFrog.setName(userPet.getName());
      userFrog.setHunger(userPet.getHunger());
      userFrog.setBoredom(userPet.getBoredom());
      userFrog.setSleepiness(userPet.getSleepiness());
      userFrog.setHourCounter(userPet.getHourCounter());
      userFrog.setTurnCounter(userPet.getTurnCounter());
      int actionChoice;
      cout << "Resuming Game..." << endl;
      cout << "________________________________________________________________"
              "__________"
           << endl;
      do {
        cout << "Current hour: " << userFrog.getHourCounter() << endl;
        userFrog.displayStats();
        if (!userFrog.petLiving()) {
          break;
        }
        printFile("Frog.txt");
        userFrog.displayActions();
        cout << "______________________________________________________________"
                "____________"
             << endl;
        cout << "Your choice: ";
        cin >> actionChoice;
        // Switch between interactions
        switch (actionChoice) {
        case 0:
          cout << "Please enter a file name for your pet: ";
          cin >> newFilename;
          userFrog.saveInfo(newFilename);
          cout << "Quitting game..." << endl;
          break;
        case 1:
          userFrog.playPet();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 2:
          userFrog.sleepPet();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 3:
          userFrog.feedPet();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 4:
          userFrog.catchInsects();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        case 5:
          userFrog.swim();
          userFrog.passTime();
          userFrog.updateStats();
          userFrog.warningMessage();
          break;
        default:
          cout << "Please select a valid option." << endl;
          cout << "____________________________________________________________"
                  "______________"
               << endl;
          break;
        }
      } while (actionChoice != 0);
    }
  }
  return 0;
}