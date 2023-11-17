#include <iostream>
#include "Player.h"
#include "Item.h"
Player vasya;
Item sword("sword", 2);

int main() {
    vasya.takeItem(sword);
    vasya.storeToInventory(0);
    vasya.checkInventory();
    vasya.checkHands();
    vasya.takeFromInventory(0);
    vasya.checkInventory();
    vasya.checkHands();
    return 0;
}
