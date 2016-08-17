//
// Created by Luca on 12/08/2016.
//

#include "Cell.h"

void Cell::subscribe(Observer *o) {
    observers.push_back(o);
}
void Cell::unsubscribe(Observer *o) {
    observers.remove(o);
}
void Cell::notify() {
    for(auto it=observers.begin();it!=observers.end();it++)
        (*it)->update();
}