//
// Created by Egor on 14.11.2023.
//

#include "Item.h"



int Item::getMass() {
    return mass;
}

string Item::getName() {
    return name;
}

void Item::setName(string Newname) {
    name = Newname;
}

void Item::deleteItem() {
    name = "none";
    mass = 0;
}

