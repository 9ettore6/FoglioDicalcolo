
#include "MaxFormula.h"

void MaxFormula::addCell(Cell *cell) {
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
    max = (cells.front()->getValue()).toFloat();
    for (auto itr = cells.begin(); itr != cells.end(); itr++)
        if (max < ((*itr)->getValue()).toFloat())
            max = ((*itr)->getValue()).toFloat();
    item->setValue(max);
}

float MaxFormula::getMax() const {
    return max;
}