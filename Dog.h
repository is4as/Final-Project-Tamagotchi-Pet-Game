#ifndef DOG_H
#define DOG_H
#include "Pet.h"
using namespace std;

class Dog : public Pet {
  public:
    Dog();
    void goForWalk();
    void giveTreat();
    void displayActions();
};

#endif