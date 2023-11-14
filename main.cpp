#include <iostream>
#include "Player.h"
#include "Item.h"
Player vasya;
Item sword;

int main() {
    sword.setName("sword");
    vasya.takeItem(sword);
    vasya.storeToInventory(sword,0);
    vasya.checkInventory();
    vasya.checkHands();
    return 0;
}
