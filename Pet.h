#ifndef PET_H
#define PET_H
#include <string>
using namespace std;

class Pet {
  protected:
    int petNumber;
    string name;
    string filename;
    int hunger;
    int boredom;
    int sleepiness;
    int hourCounter = 0;
    int turnCounter = 0;
  public:
    // Default Constructor
    Pet();
    // Getters
    int getPetNumber();
    string getName();
    int getHunger();
    int getBoredom();
    int getSleepiness();
    int getHourCounter();
    int getTurnCounter();
    // Setters
    void setPetNumber(int);
    void setName(string);
    void setHunger(int);
    void setBoredom(int);
    void setSleepiness(int);
    void setHourCounter(int);
    void setTurnCounter(int);
    // Game Interactions
    void playPet();
    void sleepPet();
    void feedPet();
    // Utilities
    void passTime(); // Lowers a random level every 5 turns
    void warningMessage(); // Outputs warning if status level gets too high
    virtual void displayActions(); // Displays interaction options (other pet interactions displayed through polymorphism)
    void displayStats(); // Displays status levels
    void updateStats(); // Updates status levels so numbers stay in the 0-100 range
    bool petLiving(); // Checks if levels surpass 100 (death) and if hour has passed 50
    void saveInfo(string); // Saves current pet progress
    void loadInfo(string); // Loads pet progress so game can be resumed
};

#endif