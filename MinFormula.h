//
// Created by Luca on 13/08/2016.
//

#ifndef FOGLIODICALCOLO_MINFORMULA_H
#define FOGLIODICALCOLO_MINFORMULA_H


#include <list>
#include "Observer.h"
#include "Cell.h"

class MinFormula : public Observer{
private:
    std::list<Cell *> cells;
    int max;
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();
};


#endif //FOGLIODICALCOLO_MINFORMULA_H
