
#ifndef FOGLIOCALCOLO_MINFORMULA_H
#define FOGLIOCALCOLO_MINFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"
#include "Formula.h"

class MinFormula : public Formula {
public:
    MinFormula(Cell *item):Formula(item){}
    virtual void calc() override;
};

#endif //FOGLIOCALCOLO_MINFORMULA_H
