
#ifndef FOGLIOCALCOLO_MEANFORMULA_H
#define FOGLIOCALCOLO_MEANFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"

class MeanFormula : public Observer {
public:
    MeanFormula(Cell *item):item(item){}
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();
    float getMean() const;

private:
    std::list<Cell *> cells;
    float mean;
    Cell *item;
};

#endif //FOGLIOCALCOLO_MEANFORMULA_H
