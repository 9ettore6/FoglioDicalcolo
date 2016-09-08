
#ifndef FOGLIOCALCOLO_MAXFORMULA_H
#define FOGLIOCALCOLO_MAXFORMULA_H

#include <list>
#include "Cell.h"
#include "Observer.h"
#include "Formula.h"

class MaxFormula : public Formula{
public:
    MaxFormula(Cell *item):Formula(item){}
    virtual void calc() override;
};

#endif //FOGLIOCALCOLO_MAXFORMULA_H
