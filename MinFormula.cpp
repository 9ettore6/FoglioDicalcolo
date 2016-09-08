
#include "MinFormula.h"

void MinFormula::calc() {
    val = (cells.front()->getValue()).toFloat();
    for (auto itr = cells.begin(); itr != cells.end(); itr++)
        if (val > ((*itr)->getValue()).toFloat())
            val = ((*itr)->getValue()).toFloat();
    item->setValue(val);
}
