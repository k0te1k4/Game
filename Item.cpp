//
// Created by Egor on 14.11.2023.
//

#include "Item.h"

#include <utility>



int Item::getMass() {
    return mass;
}

string Item::getName() {
    return name;
}

void Item::setName(string Newname) {
    name = std::move(Newname);
}

void Item::deleteItem() {
    this->name = "none";
    this->mass = 0;
    this->coordX = 0;
    this->coordY = 0;
}

std::pair<int, int> Item::getCoords() {
    return pair<int, int>(coordX,coordY);
}

