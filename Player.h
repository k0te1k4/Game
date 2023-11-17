//
// Created by Egor on 14.11.2023.
//

#ifndef MYGAME_PLAYER_H
#define MYGAME_PLAYER_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;


class Player {
    int health = 100;
    Item inventory[3];
    Item itemInHands;

public:
    void storeToInventory(int place);
    void takeItem(Item item);
    void takeFromInventory(int place);
    Item checkInventory();
    Item checkHands();
};


#endif //MYGAME_PLAYER_H
