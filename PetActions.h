//
// Created by Jaydon Eppinette on 2/22/2025.
//

#ifndef PETSIMULATOR_PETACTIONS_H
#define PETSIMULATOR_PETACTIONS_H

#include <iostream>
using namespace std;

class PetActions {

private:

    int petMood;

    void PassTime(int time = 1);

public:

    void Talk();

    void FeedPet();

    void Play();

    void DisplayPetBehavior();

    void Menu();

};

#endif //PETSIMULATOR_PETACTIONS_H
