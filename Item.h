//
// Created by Egor on 14.11.2023.
//

#ifndef MYGAME_ITEM_H
#define MYGAME_ITEM_H
#include <iostream>
#include <string>
#include <utility>
using namespace std;
class Item {

    int mass = 0;
    string name = "none";
    int coordX = 0;
    int coordY = 0;
public:
    Item(){
        name = "none";
        mass = 0;
        coordX = 0;
        coordY = 0;
    }
    Item(string p_name,int p_mass){
        name = std::move(p_name);
        mass = p_mass;
    }
    ~Item()= default;
    int getMass();
    string getName();
    void setName(string Newname);
    void deleteItem();
    std::pair<int,int> getCoords();
};


#endif //MYGAME_ITEM_H
