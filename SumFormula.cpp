//
// Created by Giulia Bellini on 24/08/16.
//

#include "SumFormula.h"

void SumFormula::addCell(Cell *cell) {
    cells.push_back(cell);
    (*cell).subscribe(this);
    calc();
}

void SumFormula::removeCell(Cell *cell) {
    cells.remove(cell);
    (*cell).unsubscribe(this);
}

void SumFormula::update() {
    calc();
}

void SumFormula::calc() {
    float result = 0;
    for (auto itr = cells.begin(); itr != cells.end(); ++itr)
        result += ((*itr)->getValue()).toFloat();
    sum = result;
}

float SumFormula::getSum() const {
    return sum;
}