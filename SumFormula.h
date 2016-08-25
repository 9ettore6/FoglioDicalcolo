//
// Created by Giulia Bellini on 24/08/16.
//

#ifndef FOGLIOCALCOLO_SUMFORMULA_H
#define FOGLIOCALCOLO_SUMFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"

class SumFormula : public Observer {
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();

    float getSum() const;

private:
    std::list<Cell *> cells;
    float sum;
};

#endif //FOGLIOCALCOLO_SUMFORMULA_H
