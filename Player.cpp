//
// Created by Egor on 14.11.2023.
//

#include "Player.h"

#include <utility>

void Player::takeItem(Item item) {
    if(itemInHands.getName() == "none"){
        itemInHands = item;
    }
    else{
        cout << "hands zanyati"<< endl;
    }
}

void Player::storeToInventory(int place) {

    if(itemInHands.getName() != "none"){
        inventory[place] = itemInHands  ;
        itemInHands.deleteItem();
    }
    else{
        cout << "item not in hands" << endl;
    }
}

Item Player::checkInventory() {
    cout << "Inventory:" << endl;
    for(Item it : inventory){
        cout<< "- " << it.getName() << " " <<  it.getCoords().first << " " << it.getCoords().second << endl;
    }
    return *inventory;
}

Item Player::checkHands() {
    cout << "Hands: ";
    cout << itemInHands.getName() << endl;
    return itemInHands;
}

void Player::takeFromInventory(int place) {
    if(inventory[place].getName() != "none" && itemInHands.getName() == "none"){
        itemInHands = inventory[place];
        inventory[place].deleteItem();
    }
}


