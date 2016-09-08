

#include "SumFormula.h"

void SumFormula::calc() {
    float result = 0;
    for (auto itr = cells.begin(); itr != cells.end(); ++itr)
        result += ((*itr)->getValue()).toFloat();
    val = result;
    item->setValue(val);
}
