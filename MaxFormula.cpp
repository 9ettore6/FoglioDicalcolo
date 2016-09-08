
#include "MaxFormula.h"


void MaxFormula::calc() {
    val = (cells.front()->getValue()).toFloat();
    for (auto itr = cells.begin(); itr != cells.end(); itr++)
        if (val < ((*itr)->getValue()).toFloat())
            val = ((*itr)->getValue()).toFloat();
    item->setValue(val);
}
