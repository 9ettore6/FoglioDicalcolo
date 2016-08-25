//
// Created by Giulia Bellini on 24/08/16.
//

#include "MinFormula.h"

void MinFormula::addCell(Cell *cell) {
    cells.push_back(cell);
    (*cell).subscribe(this);
    calc();
}

void MinFormula::removeCell(Cell *cell) {
    cells.remove(cell);
    (*cell).unsubscribe(this);
}

void MinFormula::update() {
    calc();
}

void MinFormula::calc() {
    float result = cells.front();
    for (auto itr = cells.begin(); itr != cells.end(); ++itr)
        if (result < (*itr)->getValue())
           min = result;
}

float MinFormula::getMin() const {
    return min;
}