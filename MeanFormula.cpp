//
// Created by Luca on 13/08/2016.
//

#include "MeanFormula.h"

void MeanFormula::addCell(Cell *cell) {
    cells.push_back(cell);
    (*cell).subscribe(this);
    calc();
}
void MeanFormula::removeCell(Cell *cell) {
    cells.remove(cell);
    (*cell).unsubscribe(this);
}
void MeanFormula::update() {
    calc();
}
void MeanFormula::calc() {
    float result=0;
    int dim=cells.size();

    //fare il minimo
}