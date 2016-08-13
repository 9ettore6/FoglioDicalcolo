//
// Created by Luca on 13/08/2016.
//

#ifndef FOGLIODICALCOLO_MAXFORMULA_H
#define FOGLIODICALCOLO_MAXFORMULA_H


#include <list>
#include "Observer.h"
#include "Cell.h"

class MaxFormula : public Observer{
private:
    std::list<Cell *> cells;
    int max;
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();
};


#endif //FOGLIODICALCOLO_MAXFORMULA_H
