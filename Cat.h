#ifndef CAT_H
#define CAT_H
#include "Pet.h"
using namespace std;

class Cat : public Pet {
  public:
    Cat();
    void chaseMouse();
    void takeNap();
    void displayActions();
};

#endif