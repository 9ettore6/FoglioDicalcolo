
#ifndef FOGLIOCALCOLO_SUMFORMULA_H
#define FOGLIOCALCOLO_SUMFORMULA_H

#include <list>
#include "Cell.h"

class SumFormula : public Observer {
private:
    std::list<Cell *> cells;
    float sum;
    Cell *item;
public:
    SumFormula(Cell *item):item(item){}
    void addCell(Cell* cell);
    void removeCell(Cell* cell);
    virtual void update() override;
    void calc();

    float getSum() const;

};

#endif //FOGLIOCALCOLO_SUMFORMULA_H
