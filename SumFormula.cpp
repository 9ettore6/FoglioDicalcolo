//
// Created by Luca on 13/08/2016.
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
    float result=0;
    int dim=cells.size();
    for (int i = 0; i < cells.size(); ++i) {
        //fare la somma dei valori di tutte le celle
    }
    sum=result;
}