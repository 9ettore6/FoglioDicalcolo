
#ifndef FOGLIOCALCOLO_MEANFORMULA_H
#define FOGLIOCALCOLO_MEANFORMULA_H

#include <list>
#include "Observer.h"
#include "Cell.h"
#include "Formula.h"

class MeanFormula : public Formula {
public:
    MeanFormula(Cell *item):Formula(item){}
    virtual void calc() override;

};

#endif //FOGLIOCALCOLO_MEANFORMULA_H
