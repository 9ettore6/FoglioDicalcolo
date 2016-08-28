
#ifndef FOGLIOCALCOLO_MAXFORMULA_H
#define FOGLIOCALCOLO_MAXFORMULA_H

#include <list>
#include "Cell.h"
#include "Observer.h"

class MaxFormula : public Observer {
public:
    MaxFormula(Cell *item):item(item){}
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();
    float getMax() const;

private:
    std::list<Cell *> cells;
    float max;
    Cell *item;
};

#endif //FOGLIOCALCOLO_MAXFORMULA_H
