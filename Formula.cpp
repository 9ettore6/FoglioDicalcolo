//
// Created by Luca on 08/09/2016.
//

#include "Formula.h"

void Formula::addCell(Cell *cell) {
    cells.push_back(cell);
    (*cell).subscribe(this);
    calc();
}

void Formula::removeCell(Cell *cell) {
    cells.remove(cell);
    (*cell).unsubscribe(this);
}

float Formula::getVal() const {
    return val;
}

void Formula::update() {
    calc();
}