//
// Created by Luca on 13/08/2016.
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
    float result=0;
    int dim=cells.size();

    //fare il minimo
}