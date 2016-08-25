//
// Created by Giulia Bellini on 24/08/16.
//

#ifndef FOGLIOCALCOLO_MAXFORMULA_H
#define FOGLIOCALCOLO_MAXFORMULA_H

#include <list>
#include "Cell.h"
#include "Observer.h"

class MaxFormula : public Observer {
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();

    float getMax() const;

private:
    std::list<Cell *> cells;
    float max;
};

#endif //FOGLIOCALCOLO_MAXFORMULA_H
