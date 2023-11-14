//
// Created by Egor on 14.11.2023.
//

#include "Player.h"

#include <utility>

void Player::takeItem(Item item) {
    if(itemInHands.getName() == "none"){
        itemInHands = std::move(item);
    }
    else{
        cout << "hands zanyati"<< endl;
    }
}

void Player::storeToInventory(Item item,int place) {

    if(itemInHands.getName() != "none"){

        inventory[place] = std::move(item);
        itemInHands.deleteItem();
    }
    else{
        cout << "item not in hands" << endl;
    }
}

Item *Player::checkInventory() {
    cout << "Inventory:" << endl;
    for(Item it : inventory){
        cout<< "- " << it.getName() << endl;
    }
    return inventory;
}

Item Player::checkHands() {
    cout << "Hands: ";
    cout << itemInHands.getName() << endl;
    return itemInHands;
}

