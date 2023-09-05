#ifndef FROG_H
#define FROG_H
#include "Pet.h"
using namespace std;

class Frog : public Pet {
  public:
    Frog();
    void catchInsects();
    void swim();
    void displayActions();
};

#endif