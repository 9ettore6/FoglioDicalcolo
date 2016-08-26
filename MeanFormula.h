//
// Created by Giulia Bellini on 24/08/16.
//

#ifndef FOGLIOCALCOLO_MEANFORMULA_H
#define FOGLIOCALCOLO_MEANFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"

class MeanFormula : public Observer {
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();

    float getMean() const;

private:
    std::list<Cell *> cells;
    float mean;
    float sum;
    int count;
};

#endif //FOGLIOCALCOLO_MEANFORMULA_H
