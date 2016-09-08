
#include "MeanFormula.h"


void MeanFormula::calc() {
    float sum = 0;
    int count = 0;
    for (auto itr = cells.begin(); itr != cells.end(); ++itr) {
        sum += (*itr)->getValue().toFloat();
        count++;
    }
    val = (sum / count);
    item->setValue(val);
}
