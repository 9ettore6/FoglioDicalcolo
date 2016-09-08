
#ifndef FOGLIOCALCOLO_SUMFORMULA_H
#define FOGLIOCALCOLO_SUMFORMULA_H

#include <list>
#include "Cell.h"
#include "Formula.h"

class SumFormula : public Formula {
public:
    SumFormula(Cell *item):Formula(item){}
    virtual void calc() override;
};

#endif //FOGLIOCALCOLO_SUMFORMULA_H
