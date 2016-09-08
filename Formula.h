//
// Created by Luca on 08/09/2016.
//

#ifndef FOGLIODICALCOLO_FORMULA_H
#define FOGLIODICALCOLO_FORMULA_H


#include "Observer.h"
#include "Cell.h"

class Formula : public Observer{
public:
    Formula(Cell *item):item(item){}
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void calc()=0;
    float getVal() const;
    virtual void update() override;

protected:
    std::list<Cell *> cells;
    float val;
    Cell *item;
};


#endif //FOGLIODICALCOLO_FORMULA_H
