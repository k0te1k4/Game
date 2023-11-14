//
// Created by Egor on 14.11.2023.
//

#ifndef MYGAME_ITEM_H
#define MYGAME_ITEM_H
#include <iostream>
#include <string>
using namespace std;
class Item {

    int mass = 0;
    string name = "none";
public:
    int getMass();
    string getName();
    void setName(string Newname);
    void deleteItem();
};


#endif //MYGAME_ITEM_H
