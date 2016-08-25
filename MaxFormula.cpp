//
// Created by Giulia Bellini on 24/08/16.
//

#include "MaxFormula.h"

void MaxFormula::addCell(Cell* cell) {
    cells.push_back(cell);
    (*cell).subscribe(this);
    calc();
}

void MaxFormula::removeCell(Cell *cell) {
    cells.remove(cell);
    (*cell).unsubscribe(this);
}

void MaxFormula::update() {
    calc();
}

void MaxFormula::calc() {
    float result = cells.front();
    for (auto itr = cells.begin(); itr != cells.end(); ++itr)
        if (result > (*itr)->getValue())
            max = result;
}

float MaxFormula::getMax() const {
    return max;
}