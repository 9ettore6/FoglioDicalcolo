//
// Created by Luca on 13/08/2016.
//

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
    float result=0;
    int dim=cells.size();

    //fare il massimo
}