//
// Created by Giulia Bellini on 24/08/16.
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
    float sum = 0;
    int count = 0;
    for (auto itr = cells.begin(); itr != cells.end(); ++itr) {
        sum += (*itr)->getValue().toFloat();
        count++;
    }
    mean = (sum / count);
}

float MeanFormula::getMean() const {
    return mean;
}