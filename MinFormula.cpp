
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
    min = (cells.front()->getValue()).toFloat();
    for (auto itr = cells.begin(); itr != cells.end(); itr++)
        if (min > ((*itr)->getValue()).toFloat())
            min = ((*itr)->getValue()).toFloat();
    item->setValue(min);
}

float MinFormula::getMin() const {
    return min;
}