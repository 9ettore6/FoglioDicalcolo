//
// Created by Luca on 13/08/2016.
//

#ifndef FOGLIODICALCOLO_SUMFORMULA_H
#define FOGLIODICALCOLO_SUMFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"

class SumFormula : public Observer{
private:
    std::list<Cell *> cells;
    int sum;
public:
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();
};


#endif //FOGLIODICALCOLO_SUMFORMULA_H
