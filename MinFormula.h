//
// Created by Giulia Bellini on 24/08/16.
//

#ifndef FOGLIOCALCOLO_MINFORMULA_H
#define FOGLIOCALCOLO_MINFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"

class MinFormula : public Observer {
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();

    float getMin() const;

private:
    std::list<Cell *> cells;
    float min;
};

#endif //FOGLIOCALCOLO_MINFORMULA_H
